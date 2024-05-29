import scipy.stats as stats
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

def main():
    # 이항분포
    print(stats.binom.pmf(2,n=5,p=0.1))
    print(stats.binom.cdf(2,n=5,p=0.1))
    
    # 푸아송 분포
    print(stats.poisson.rvs(2,size=100))
    print(stats.poisson.rvs(2,size=100).mean())
    
    # 지수분포
    print(stats.expon.rvs(scale=5, size=100))
    
    # 베이불 분포
    print(stats.weibull_min.rvs(1.5, scale=5000,size=100))

if __name__=="__main__":
    main()  