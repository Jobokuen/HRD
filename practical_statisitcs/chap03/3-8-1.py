import statsmodels.formula.api as smf
import pandas as pd
import statsmodels.api as sm

folder = "/home/hrd/Desktop/HRD/data/csv/"

four_session = pd.read_csv(folder + "four_sessions.csv")
# print(four_session.head())
# print(four_session.info())
model = smf.ols('Time ~ Page', data=four_session).fit()
aov_table = sm.stats.anova_lm(model)
print(aov_table)