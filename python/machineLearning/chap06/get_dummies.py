import pandas as pd

# get_dummies: True or False
edges = pd.DataFrame({'source':[0,1,2], 'target':[2,2,3], 'weight':[3,4,5], 'color':['red','blue','blue']})
print(edges)

print(pd.get_dummies(edges, dtype=int))

print(pd.get_dummies(edges["color"]))
print(pd.get_dummies(edges[["color"]]))

# 기수형 데이터를 변경하는 방법
weight_dict = {3:'M', 4:'L', 5:'XL'}
edges["weight_sign"] = edges["weight"].map(weight_dict)
print(edges["weight_sign"])
weight_sign = pd.get_dummies(edges["weight_sign"], dtype=int)
print(weight_sign)



