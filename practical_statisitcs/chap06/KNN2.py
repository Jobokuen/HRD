import numpy as np
import pandas as pd
from sklearn.neighbors import KNeighborsClassifier


folder = "/home/hrd/Desktop/HRD/data/csv/"
loan : pd.DataFrame = pd.read_csv(folder + "loan_data.csv.gz")
# print(loan.head())
# print(loan.info())

predictors = ['payment_inc_ratio', 'dit', 'revol_bal', 'revol_util']
outcome = 'outcome'

newloan = loan.loc[0:0, predictors]
X = loan.loc[1:, predictors]
y = loan.loc[1:, outcome]

knn = KNeighborsClassifier(n_neighbors=5)
knn.fit(X, y)

nbrs = knn.kneighbors(newloan)
print(X.iloc[nbrs[1][0], :])
print(f"distance : {nbrs[0][0]}")
print(f"predict : {knn.predict(newloan    )}")