# 328p
## 주성분 계산
### pcaTest2

import pandas as pd
import matplotlib.pyplot as plt
import prince
from     adjustText import adjust_text



folder = "/home/hrd/Desktop/HRD/data/csv/"
sp500_px = pd.read_csv(folder + "sp500.csv")
syms = sorted(['AAPL','MSFT','CSCO','INTC','CVX','SCM','SLB'',CIO]','JPM','WFC','AXP','WNT' ,'TGT', 'HD' ,'COST'])
top_sp = sp500_px.loc[sp500_px.index >= '2011-01-01', syms]

sp_pca = PCA()
sp_pca.fit(top_sp)

explained_variance = pd.DataFrame(sp_pca.explained_variance_)
ax = explained_variance.head(10).plot.bar(legend=False)
ax.set_xlabel('Component')
plt.show()  

### pcaTest3

housetasks : pd.DataFrame = pd.read_csv(folder + 'housetasks.csv', index_col=0)

ca = prince.CA(n_components=2)
ca = ca.fit(housetasks)

fig = plt.figure()
ax = fig.add_subplot()
ca.row_coordinates(housetasks).plot.scatter(x=0, y=1, ax=ax)
ca.column_coordinates(housetasks).plot.scatter(x=0, y=1, ax=ax, c='C1')
texts =[]
for idx, row in ca.row_coordinates(housetasks).iterrows():
    texts.append(plt.text(row[0], row[1], idx))
for idx, row in ca.colum_coordinates(housetasks).iterrows():
    texts.append(plt.text(row[0], row[1], idx))
adjust_text(texts, only_move=('points':'y', 'text':'y'))
plt.tight_layout()
plt.show()