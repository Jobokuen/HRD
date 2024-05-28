import numpy as np

def main():
    # boolean index
    x = np.array([4,6,7,3,2])
    cond = x > 3
    print(f"cond: {cond}")
    print(f"x[cond]: {x[cond]}")
    print(f"x[x>3]: {x[x>3]}")
    
    # fancy index
    cond = np.array([1,2,0,2,2,2,1,0,1,0])
    cond2 = np.random.randint(0,5,30)
    print(f"x: {x}")
    print(f"x[cond]: {x[cond]}")
    print(f"x[cond]: {x[cond2]}")
    
    #
    x = np.random.randint(1,1000,30)
    print(f"x[x.argsort()]: {x[x.argsort()]}")
if __name__=="__main__":
    main()
    
    