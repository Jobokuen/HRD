import pandas as pd
import numpy as np

# example of missing data
raw_data = {
    'first_name': ['Jason', np.nan, 'Tina', 'Jake', 'Amy'],
    'last_name': ['Miller', np.nan, 'Ali', 'Milner', 'Cooze'],
    'age': [42, np.nan, 36, 24, 73],
    'sex' : ['m', np.nan, 'f', 'm', 'f'],
    'preTestScore': [4, np.nan, np.nan, 2, 3],
    'postTestScore': [25, np.nan, np.nan, 62, 70]
}

df = pd.DataFrame(raw_data, columns=['first_name', 'last_name', 'age', 'sex', 'preTestScore', 'postTestScore'])
print(df)
# 결측지 비율
df.isnull().sum()/len(df)

# 드롭(drop)
df.dropna()
df_cleaned = df.dropna(how='all')
df_cleaned
df['location'] = np.nan
df.dropna(axis=1,how='all') 

# axis = 1 : 열
# how , any가 defalt >> all일경우 전체가 nan이지 않은경우 사라지지가 않는다.

df.dropna(axis=0, thresh=1)
# 데이터가 한개라도 존재하면 남겨둔다.

df.dropna(thresh=5) # : 만약 다섯 개 이상의 데이터가 있어야 한다면 다음 코드와 같이 thresh=5 fh wlwjdgksek.


## 채우기
# fillna(0)
print(df. fillna(0))
print(df["preTestScore"].fillna(df["preTestScore"].mean()))
print(df)

# print(df.groupby('sex').transform("mean"))

