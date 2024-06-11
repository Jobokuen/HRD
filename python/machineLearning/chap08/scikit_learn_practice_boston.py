# load boston house

import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

from sklearn import preprocessing

from sklearn.model_selection import train_test_split

from sklearn import linear_model

# 데이터 확보
folder = "/home/hrd/Desktop/HRD/data/csv/"
df = pd.read_csv(folder + "boston.csv")
print(df.keys())
data = df.drop(columns=["MEDV"])
target = df["MEDV"]
x_data = data.to_numpy()
y_data = target.to_numpy().reshape(-1, 1)
y_data.shape

# 데이터 전처리하기
minmax_scaler = preprocessing.MinMaxScaler(feature_range=(0,5)).fit(x_data)
x_scaled_data = minmax_scaler.transform(x_data)
x_scaled_data

# 데이터 분류하기
X_train, X_test, y_train, y_test = train_test_split(
    x_scaled_data, y_data, test_size=0.33)
print(X_train.shape, X_test.shape, y_train.shape, y_test.shape)

# 데이터 학습하기
regr = linear_model.LinearRegression(fit_intercept=True, copy_X=True, n_jobs=8)
lasso_regr = linear_model.Lasso(alpha=0.01, fit_intercept=True,copy_X=True)
ridge_regr = linear_model.Ridge(alpha=0.01, fit_intercept=True,copy_X=True)
SGD_regr = linear_model.SGDRegressor(penalty="l2", alpha=0.01, max_iter=1000, tol=0.001,eta0=0.01)

regr.fit(X_train, y_train)
lasso_regr.fit(X_train, y_train)
ridge_regr.fit(X_train, y_train)
SGD_regr.fit(X_train, y_train)

print(f"Linear Coefficients:{regr.coef_}")

