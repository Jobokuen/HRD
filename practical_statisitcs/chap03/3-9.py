import pandas as pd
import numpy as np
import random
import scipy.stats as stats

folder = "/home/hrd/Desktop/HRD/data/csv/"

click_rate = pd.read_csv(folder + "click_rates.csv")
# print(click_rate.head())
# print(click_rate.info())

# 표 3-4
clicks = click_rate.pivot(index="Click", columns="Headline", values="Rate")
# print(clicks)

row_average = clicks.mean(axis=1)
# print(row_average)

print(pd.DataFrame(
    {'Headline A': row_average,
    'Headline B': row_average,
    'Headline C': row_average}
))
# 1. 34개의 1(클릭한 경우)과 2966개의 0(클릭하지 않은 경우)이 들어있는 잣ㅇ자를 만들자.
box = [1] * 34
box.extend([0] * 2966)
# 2. 상자에 내용을물 잘 섞은 다음 1,000개의 표본을 세 번씩 가져와서 각각의 클릭 수를 계산한다.
random.shuffle(box)


def chi2(observed, expected):
    pearson_residuals = []
    for row, expect in zip(observed, expected):
        pearson_residuals.append([(observe -expect) ** 2 / expect for observe in row])
        
    return np.sum(pearson_residuals)

expected_clicks = clicks.sum(axis=1)['Click'] /3
ecpected_noclicks = 1000 - expected_clicks
expected = [expected_clicks, ecpected_noclicks]
# 3. 이렇게 얻은 회수와 기대한 횟수의 차이를 제곱해서 합산한다.
chi2observed = chi2(clicks.values, expected)


def perm_fun(box):
    sample_clicks = [sum(random.sample(box, 1000)),
                     sum(random.sample(box, 1000)),
                     sum(random.sample(box, 1000))]
    sample_noclicks = [1000 - n for n in sample_clicks]
    return chi2([sample_clicks, sample_noclicks], expected)

# 4. 2~3 단계를 1000번 반복한다.
perm_chi2 = [perm_fun(box) for _ in range(2000)]

# 5. 재표본추출을 통해 얻은 편차의 제곱합이 얼마나 자주 관측값을 초과하는가? 이것이 바로 p 값이다.
resampled_p_value = sum(perm_chi2 > chi2observed) / len(perm_chi2)

print(f"Observed chi-square: {chi2observed:.4f}")
print(f"Resampled p-value: {resampled_p_value:.4f}")

chisq, pvalue, df, expected = stats.chi2_contingency(clicks)
print(f"chi2 observed: {chisq:.4f}")
print(f"p-value: {pvalue:.4f}")