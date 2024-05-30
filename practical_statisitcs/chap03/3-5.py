import pandas as pd
import matplotlib.pyplot as plt
import random
import scipy.stats as stats

folder = "/home/hrd/Desktop/HRD/data/csv/"

def perm_func(x: pd.Series, nA, nB):
    n = nA + nB
    idx_b = set(random.sample(range(n), nB))
    idx_a = set(range(n)) - idx_b
    return x.loc[list(idx_b)].mean() - x.loc[list(idx_a)].mean()


def main():
    session_times : pd.DataFrame = pd.read_csv(folder + "web_page_data.csv")
    ax = session_times.boxplot(by="Page", column="Time")
    ax.set_xlabel("")
    ax.set_ylabel("Time (in xeconds)")
    
    session_times["Time"] = session_times["Time"] * 100
    res = stats.ttest_ind(session_times[session_times.Page == 'Page A']['Time'], session_times[session_times.Page == 'Page B']['Time'], equal_var=False)
    print(f"p_value for single sided test: {res.pvalue / 2:.4f}")

        
    

if __name__ == "__main__":
    main()  