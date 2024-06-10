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
print(df.isnull().sum()/len(df))

# 드롭(drop)
print(df.dropna())