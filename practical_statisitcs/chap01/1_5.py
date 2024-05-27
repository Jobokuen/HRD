import pandas as pd
import matplotlib.pyplot as plt     # boxplot

folder = "/home/hrd/Desktop/HRD/data/"

def main():
    state = pd.read_csv(folder + "state.csv")
    # boxplot
    # plt.boxplot(state["Population"])
    # plt.show()
    # state["Population"].plot.box()
    # plt.show()
    
    # 도수분포표와 히스토그램
    # binnedPopulation = pd.cut(state["Population"], 10)
    # binnedPopulation.value_counts()
    
    # matplotlib
    # plt.hist(state["Population"], bins=10)
    # plt.show()
    
    # pandas
    # state["Population"].plot.hist(bins=10)
    # plt.show()
    
    # 밀도그림과 추정
    ax = state["Murder.Rate"].plot.hist(density = True, xlim=[0,12], bins=range(1,12))
    state["Murder.Rate"].plot.density(ax=ax)
    ax.set_xlabel("Murder Rate (per 100,000)")
    plt.show()
    
    
if __name__=="__main__":
    main()