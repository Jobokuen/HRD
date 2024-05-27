import numpy as np

def main():
    # sum
    print(np.arange(1,11,2).sum())
    print(np.arange(1,13).reshape(3,4).shape)
    print(np.arange(1,13).reshape(3,4).sum())
    print(np.arange(1,13).reshape(3,4).sum(axis=0).shape)     # axis=0 >> 행의 방향
    print(np.arange(1,13).reshape(3,4).sum(axis=1).shape)     # axis=1 >> 열의 방향
    
    # 3차원
    test_array = np.arange(1,13).reshape(3,4)
    third_order_tensor = np.array([test_array,test_array,test_array])
    print(third_order_tensor.shape)
    print(third_order_tensor.sum())
    print(third_order_tensor.sum(axis=0).shape)     # axis=0 >> 행의 방향
    print(third_order_tensor.sum(axis=1).shape)     # axis=1 >> 열의 방향
    print(third_order_tensor.sum(axis=2).shape)     # axis=2 >> 축에따른 연산
    

if __name__=="__main__":
    main()
    