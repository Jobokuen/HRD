import pandas as pd
import matplotlib.pyplot as plt
import random

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
    mean_a = session_times[session_times.Page == 'Page A']['Time'].mean()
    mean_b = session_times[session_times.Page == 'Page B']['Time'].mean()
    # print(mean_b-mean_a)
    
    nA = session_times[session_times.Page == 'Page A'].shape[0]
    nB = session_times[session_times.Page == 'Page B'].shape[0]
    perm_diffs = [perm_func(session_times.Time, nA, nB) for _ in range(1000)]
    
    fig, ax = plt.subplots(figsize= (5,5))
    ax.hist(perm_diffs, bins=11, rwidth=0.9, density=True)
    ax.axvline(x=mean_b - mean_a, color='black', lw=2)
    ax.text(50,190,'Observed\ndifference', bbox={'facecolor':'white'})
    ax.set_xlabel('Session time differences (in seconds)')
    ax.set_ylabel('Density')
    plt.show()

        
    

if __name__ == "__main__":
    main()  