import scipy.stats as stats
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

def main():
    # 이산분포
    # binom_list = []
    # for _ in range(100):
    #     a = pd.Series(stats.binom.rvs(1, p=0.5, size= 100))
    #     binom_list.append(a[a==1].count())
    # pd.Series(binom_list).plot.hist()
    # plt.show()
    
    
    # 푸아송 분포
    # sample = stats.poisson.rvs(2,size=100)
    # pd.Series(sample).plot.hist()
    # plt.show()
    
    # 지수분포
    # sample =stats.expon.rvs(scale=5, size=100)
    # pd.Series(sample).plot.hist()
    # plt.show()
    
    # 베이불 분포
    sample = stats.weibull_min.rvs(1.5, scale=5000,size=100)
    pd.Series(sample).plot.hist()
    plt.show()
    
    
if __name__=="__main__":
    main()  