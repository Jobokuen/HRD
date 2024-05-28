import matplotlib.pyplot as plt
import numpy as np

def main():
    data = np.array([[5.,25.,50.,20.],[4.,23.,51.,17.],[6.,22.,52.,19]])
    
    color_list=['b','g,','r']
    data_label = ["A","B","C"]
    X= np.arange(data.shape[1])
    data = np.array([[5,5,5,5],[4,23,51,17],[6,22,52,19]])
    for i in range(3):
        plt.bar(X,data[i],bottom=np.sum(data[:i],axis=0), color = color_list[i], label=data_label[i])
        
    plt.legend()
    plt.show()

if __name__=="__main__":
    main()