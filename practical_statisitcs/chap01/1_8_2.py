import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns


folder = "/home/hrd/Desktop/HRD/data/csv/"

def hexbin(x, y, color, **kwargs):
    cmap = sns.light_palette(color, as_cmap=True)
    plt.hexbin(x, y, gridsize=15, cmap=cmap, **kwargs)
def main():
    # # 범주형 변수
    # lc_loans = pd.read_csv(folder + "lc_loans.csv")
    # crosstab = lc_loans.pivot_table(index='grade', columns='status', aggfunc=lambda x : len(x), margins=True)
    
    # df = crosstab.loc['A' : 'G', :].copy()
    # df.loc[:,'Charged off':'Late'] = df.loc[:,'Charged off':'Late'].div(df['All'], axis=0)
    # df['All'] = df['All']/sum(df['All'])
    # perc_crosstab = df
    # print(perc_crosstab)
    
    # # 범주형 변수 대 수치형 변수
    # airline_stats = pd.read_csv(folder + "airline_stats.csv")
    # # print(airline_stats)
    # airline_stats.boxplot(column='pct_carrier_delay', by='airline')
    # plt.show()
    
    # 바이올린 도표_ 책버전과 다르니 유의
    # ax = sns.violinplot(data = airline_stats, x = 'airline', y = 'pct_carrier_delay', inner = None, color = 'white')
    # plt.show()
    
    # 다변수 시각화하기
    zip_codes = [98188, 98105, 98108, 98126]
    kc_tax = pd.read_csv(folder + "kc_tax.csv.gz")
    kc_tax_zip = kc_tax.loc[kc_tax.ZipCode.isin(zip_codes), :]
    # print(kc_tax_zip)
    
    g = sns.FacetGrid(kc_tax_zip, col = 'ZipCode', col_wrap = 2)
    g.map(hexbin, 'SqFtTotLiving', 'TaxAssessedValue', extent = [0, 3500, 0, 700000])
    g.set_axis_labels('Finished Square Feet', 'Tax Assessed Value')
    g.set_titles('Zip code {col_name:.0f}')
    plt.show()
    
if __name__=="__main__":
    main()