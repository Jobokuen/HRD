import pandas as pd
import numpy as np

def main():
    data_url='http://archive.ics.uci.edu/ml/machine-learning-databases/housing/housing.data'

    df_data = pd.read_csv(data_url, sep='\s+', header = None)
    # df = pd.DataFrame(df_data)
    # df = pd.read_csv(data_url,sep='\s+', header = None)
    df = pd.DataFrame(df_data)
    print(df.head(10))
    print(df.info())
if __name__=="__main__":
    main()
    
    
    