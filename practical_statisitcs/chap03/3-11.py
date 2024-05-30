import statsmodels.formula.api as smf
import pandas as pd
import statsmodels.api as sm

effect_size = sm.stats.proportion_effectsize(0.0121,0.011)
analysis = sm.stats.TTestIndPower()
result = analysis.solve_power(effect_size=effect_size, power=0.8, alpha=0.05, alternative='larger')

print(f"Sample size: {result:.2f}")