# load boston house

import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

from sklearn import preprocessing

from sklearn.model_selection import train_test_split

from sklearn import linear_model

from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import MinMaxScaler

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


# 예측하기와 결과 분석하기
modelnames = ["Linear", "Lasso", "Ridge", "SGD"]
models = []
models.append(regr)
models.append(lasso_regr)
models.append(ridge_regr)
models.append(SGD_regr)

regr.fit(X_train, y_train)
lasso_regr.fit(X_train, y_train)
ridge_regr.fit(X_train, y_train)
SGD_regr.fit(X_train, y_train)

for m, modelName in zip(models, modelnames):
    print(f"{modelName} Coefficients:{m.coef_}")
print("-------------------------")
for m, modelName in zip(models, modelnames):
    print(f"{modelName} Intercept:{m.intercept_}")

print(regr.predict(x_data[:5]))
print(x_data[:5].dot(regr.coef_.T) + regr.intercept_)

y_true = y_test.copy()
y_hats = []
for m in models:
    y_hats.append(m.predict(X_test))
for y_hat, modelName in zip(y_hats, modelnames):
    print(f"{modelName} R2 Score:{r2_score(y_true, y_hat)}")
    print(f"{modelName} MSE:{mean_squared_error(y_true, y_hat)}")
    print(f"{modelName} RMSE:{np.sqrt(mean_squared_error(y_true, y_hat))}")
    print(f"{modelName} MAE:{mean_absolute_error(y_true, y_hat)}")


# 2 x 2 plot 출력
fig = plt.figure()
axes = []
axes.append(fig.add_subplot(221))
axes.append(fig.add_subplot(222))
axes.append(fig.add_subplot(223))
axes.append(fig.add_subplot(224))
for i, y_hat in enumerate(y_hats):
    axes[i].scatter(y_true, y_hat, s=10)
    axes[i].plot([y_true.min(), y_true.max()], [y_true.min(), y_true.max()], 'k--', lw=2)
plt.xlabel("Prices: $Y_i$")
plt.ylabel("Predicted prices: $\hat{Y}_i$")
plt.title("Prices vs Predicted prices: $Y_i$ vs $\hat{Y}_i$")
plt.show()

