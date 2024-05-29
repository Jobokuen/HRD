import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns


folder = "/home/hrd/Desktop/HRD/data/csv/"

def main():
    #육각형 구간 그리기
    kc_tax = pd.read_csv(folder + "kc_tax.csv.gz")
    
    kc_tax0 = kc_tax.loc[(kc_tax['TaxAssessedValue'] < 750000) & (kc_tax['SqFtTotLiving'] > 100) & (kc_tax['SqFtTotLiving'] < 3500), :]
    kc_tax0.shape
    
    ax = kc_tax0.plot.hexbin(x='SqFtTotLiving', y='TaxAssessedValue', gridsize=20, sharex=False, figsize=(5,4))
    ax.set_xlabel("Finished Square Feet")
    ax.set_ylabel("Tax Assessed Value")
    plt.show()  
    
    
    # 등고선 그리기
    # fig = plt.figure()
    # fig, ax = plt.subplot(figsize=(4,4))
    # ax = sns.kdeplot(data=kc_tax0, x="SqFtTotLiving", y="TaxAssessedValue", ax=ax)
    # ax.set_xlabel("Finished Square Feet")
    # ax.set_ylabel("Tax Assessed Value")
    # plt.show()
    
    
if __name__=="__main__":
    main()