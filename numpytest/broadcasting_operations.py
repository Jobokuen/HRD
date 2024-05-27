import numpy as np

def main():
    x = np.arange(1,6)
    y = np.arange(10,50,10).reshape(-1,1)
    print(x)
    print(y)
    print(x+y)
    
if __name__=="__main__":
    main()
    