import numpy as np

def main():
    # ones
    test_array = np.ones((10,10), dtype=np.int8)
    print(test_array)
    
    # zeros
    test_array = np.zeros((10,10), dtype=np.int8)
    print(test_array)
    
    # empty
    test_array = np.empty((10,10), dtype=np.int8)
    print(test_array)
    

    # ones_like, zeros_like, empty_like
    re_array = np.array(range(60)).reshape(5,12)
    
    test_array2 = np.ones_like(re_array)
    test_array2 = np.zeros_like(re_array)
    test_array2 = np.empty_like(re_array)
    
    
    # 단위 행렬, eye, diag
    np.identity(n=3,dtype=np.int8)
    np.eye(N=3,M=5,k=2)
    li1 = np.array(range(9)).reshape((3, 3))
    print(np.diag(li1))

    
if __name__=="__main__":
    main()