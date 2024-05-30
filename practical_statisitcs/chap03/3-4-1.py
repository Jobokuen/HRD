import pandas as pd
import matplotlib.pyplot as plt
import random
import time
import numpy as np
import scipy.stats as stats

def perm_func(x: pd.Series, nA, nB):
    n = nA + nB
    idx_b = set(random.sample(range(n), nB))
    idx_a = set(range(n)) - idx_b
    return x.loc[list(idx_b)].mean() - x.loc[list(idx_a)].mean()



def main():
    obs_pct_diff = 100 * (200/23739 - 182/22588)
    random.seed(time.time())
    print(f"Observed difference: {obs_pct_diff}")
    conversion = [0] * 45945
    conversion.extend([1] * 382)
    conversion = pd.Series(conversion)
    perm_diffs = [100 * perm_func(conversion, 23739, 22588) for _ in range(1000)]
    
    fig, ax = plt.subplots(figsize= (5,5))
    ax.hist(perm_diffs, bins=11, rwidth=0.9, density=True)
    ax.axvline(x=obs_pct_diff, color='black', lw=2)
    ax.text(0.06, 200, 'Observed\ndifference', bbox={'facecolor':'white'})
    ax.set_xlabel('Conversion rate (percent)')
    ax.set_ylabel('Frequency')
    plt.show()
    
    survivors = np.array([[200, 23739 -200], [182,22588-182]])
    chi2, p_value, df, _ = stats.chi2_contingency(survivors)
    print(f"p-value for single sided test: {p_value / 2:.4f}")
        
    

if __name__ == "__main__":
    main()  