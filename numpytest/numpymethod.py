import numpy as np

def main():
    li1 = [[1,2,3],[1,2,3],[1,2,3],[1,2,3]]
    test_array = np.array(li1,dtype=np.int8)
    
    #reshape
    print(test_array.shape)
    test_array2 = test_array.reshape((-1,))
    print(test_array2.shape)
    print(test_array2)
    
    li2 = [i for i in range(1000)]
    tensor_array = np.array(li2,dtype=np.int64)
    tensor_array = tensor_array.reshape((10,2,5,10))
    print(tensor_array)
    
    # flatten == reshape(-1)
    print(tensor_array.flatten())

    
if __name__=="__main__":
    main()