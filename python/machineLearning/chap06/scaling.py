import pandas as pd

df = pd.DataFrame({
    'A' :[14.00,90.20,90.95,96.27,91.21],
    'B' :[103.02,107.26,110.35,114.23,114.68],
    'C' :['big','small','big','small','small']
})
print(df)

# 최솟값-최댓값 정규화
# broadcasting 연산 가능
df["A"] - df["A"].min()
scaling = (df["A"] - df["A"].min()) / (df["A"].max() - df["A"].min())
print(scaling)

# z-score 정규화
z_score_scaling = (df["B"] - df["B"].mean()) / df["B"].std()
print(z_score_scaling)

