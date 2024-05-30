import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

folder = "/home/hrd/Desktop/HRD/data/csv/"

def perm_test(df):
    df = df.copy()
    df["Time"] = np.random.permutation(df["Time"].values)
    return df.groupby('Page').mean().var().iloc[0]

def main():
    four_session = pd.read_csv(folder + "four_sessions.csv")
    # print(four_session.head())
    # print(four_session.info())
    
    observed_variance = four_session.groupby('Page').mean().var().iloc[0]
    observed_mean = four_session.groupby("Page").mean().values.ravel()
    print(observed_variance)
    print(observed_mean)
    
    perm_variance = [perm_test(four_session) for _ in range(3000)]
    prob = np.mean([var > observed_variance for var in perm_variance])
    print(prob)
    
    
    # fig = plt.figure()
    # ax = fig.add_subplot()
    # four_session.boxplot(by="Page",column="Time",ax=ax)
    # plt.show()
    
    
    
if __name__ == "__main__":
    main()