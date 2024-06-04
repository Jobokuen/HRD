import pandas as pd
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler

folder = "/home/hrd/Desktop/HRD/data/csv/"
loan3000 = pd.read_csv(folder + "loan3000.csv")

predictors = ['borrower_score', 'payment_inc_ratio']
outcome = 'outcome'

X = loan3000[predictors]
y = loan3000[outcome]

rf = RandomForestClassifier(n_estimators=100, random_state = 1, oob_score=True)
rf.fit(X,y)
print(f"rf oo diciaian {rf.oob_score_}")

