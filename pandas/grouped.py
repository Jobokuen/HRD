import pandas as pd
import numpy as np


def main():
    # 그룹화된 상태
    ipl_data = {'Team': ['Riders', 'Riders', 'Devils', 'Devils', 'Kings',
                         'kings', 'Kings', 'Kings', 'Riders', 'Royals', 'Royals',
                         'Riders'],
                'Rank': [1, 2, 2, 3, 3, 4, 1, 1, 2, 4, 1, 2],
                'Year': [2014, 2015, 2014, 2015, 2014, 2015, 2016, 2017, 2016, 2014, 2015, 2017],
                'Points': [876, 789, 863, 673, 741, 812, 756, 788, 694, 701, 804, 690]}
    df = pd.DataFrame(ipl_data)
    # 그룹화
    grouped = df.groupby("Team")
    grouped.get_group("Riders")
    print(grouped)
    
    # 집계
    # agg: 다양한 함수를 그대로 적용시킨다.
    print(grouped.agg(min))
    print(grouped.agg(np.mean))
    
    # 변환
    # 개별 데이터의 변환을 지워한다.
    # 적용하는 시점에서는 그룹화된 상태의 값으로 적용된다.
    grouped.transform(max)
    
    score = lambda x: (x - x.mean()) / x.std()
    print(grouped.transform(score))
    
    # 필터
    # 분할된 상태에서 각각의 그룹화된 데이터 프레임을 의미
    print(df.groupby("Team").filter(lambda x: len(x) >= 3))
    
    # Points 열을 추출
    print(df.groupby("Team").filter(lambda x: x["Points"].max() > 800))
    
    
    
    
    
    
if __name__ == "__main__":
    main()