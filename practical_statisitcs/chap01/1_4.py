import pandas as pd
from statsmodels import robust

folder = "/home/hrd/Desktop/HRD/data/"

def main():
    state = pd.read_csv(folder + "state.csv")
    std = state["Population"].std()
    print(f"인구 표준 편차는: {std:.2f}")
    iqr = state["Population"].quantile(0.75)-state["Population"].quantile(0.25)
    print(f"인구 사분위범위는: {iqr:.2f}")
    mad = robust.scale.mad(state["Population"])
    print(f"인구 중위절대편차는: {mad:.2f}")
    
    
    
    
    
if __name__=="__main__":
    main()