import numpy as np

def main():
    x_1 = np.arange(1,7).reshape(2,3)
    x_2 = np.arange(1,7).reshape(3,2)
    print(x_1.dot(x_2))
    
if __name__=="__main__":
    main()
    