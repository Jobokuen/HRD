import pandas as pd
from scipy import stats
import numpy as np    
import wquantiles

folder = "/home/hrd/Desktop/HRD/data/"

def main():
    state = pd.read_csv(folder+"state.csv")
    # print(type(state))
    # print(state.head())
    print(f"population의 평균은: {state['Population'].mean():.2f}")
    state_trim_mean = stats.trim_mean(state['Population'], 0.1)
    print(f"절사평균은: {state_trim_mean:.2f}")
    median = state["Population"].median()
    print(f"중앙 값은: {median:.2f}")
    mean_weight = np.average(state['Murder.Rate'], weights=state["Population"])
    print(f"미국 살인율 가중 평균(인구가중): {mean_weight:.2f}")
    wq_median = wquantiles.median(state['Murder.Rate'], weights=state["Population"])
    print(f"미국 살인율 가중 중간값(인구가중): {wq_median:.2f}")
    
    
    
if __name__=="__main__":
    main()