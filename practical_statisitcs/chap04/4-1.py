from sklearn.linear_model import LinearRegression
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

folder = "/home/hrd/Desktop/HRD/data/csv/"
lung = pd.read_csv(folder + "LungDisease.csv")
lung.plot.scatter(x="Exposure", y="PEFR")
model = LinearRegression()
predictors = ["Exposure"]
outcome = "PEFR"
model.fit(lung[predictors], lung[outcome])
# print(f"Model slope: {model.coef_[0]:.2f}")
# print(f"Model intercept: {model.intercept_:.2f}")

fitted = model.predict(lung[predictors])
residuals = lung[outcome] - fitted
# print(residuals.mean())
# print(residuals.std())
# print(residuals)

fig = plt.figure()
ax = fig.add_subplot()
ax.set_xlim(0,23)
ax.set_ylim(205.450)
ax.set_xlabel("Exposure")
ax.set_ylabel("PEFR")
ax.plot((0,23), model.predict(pd.DataFrame({"Exposure": [0,23]})))
ax.text(0.4, model.intercept_, r'$b_0$', size='larger') #type: ignore

x = pd.DataFrame({"Exposure": [7.5,17.5]})
y = model.predict(x)
ax.plot((7.5,7.5,17.5), (y[0], y[1], y[1]),'--')
ax.text(5,np.mean(y), r'$
            $')
plt.show()
