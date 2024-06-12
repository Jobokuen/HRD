import pandas as pd
import numpy as np

viagra_spam = {
    'viagra': [1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1],
    'spam':   [1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1]
}

df = pd.DataFrame(viagra_spam)
np_data = df.to_numpy()

p_viagra = sum(np_data[:, 0] & np_data[:,1]) / sum(np_data[:,1])
print(p_viagra)

p_viagra_inter_spam = sum(np_data[:, 0] & np_data[:,1]) / sum(np_data[:,0])
print(p_viagra_inter_spam)

