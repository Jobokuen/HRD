import pandas as pd
import matplotlib.pyplot as plt     # boxplot

folder = "/home/hrd/Desktop/HRD/data/"

def main():
    # 이진 데이터 막대도표 
    dfw = pd.read_csv(folder + "dfw_airline.csv")
    ax = dfw.transpose().plot.bar(figsize=(4,4), legend=False)
    ax.set_xlabel("Cause of delay")
    ax.set_ylabel("Count")
    plt.show()
    
    
    
if __name__=="__main__":
    main()