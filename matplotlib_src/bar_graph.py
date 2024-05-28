import matplotlib.pyplot as plt
import numpy as np

def main():
    # 막대그래프(bar graph)
    data = [[5.,25.,50.,50.],[4.,23.,51.,71.],[6.,22.,52.,19.]]
    
    X = np.arange(0,8,2)
    
    plt.bar(X+0,00, data[0],color = 'b', width= 0.50)
    plt.bar(X+0,50, data[1],color = 'g', width= 0.50)
    plt.bar(X+1,00, data[2],color = 'r', width= 0.50)
    
    plt.xticks(X+0.5, ("A","B","C","D"))
    
    plt.show()
    
    

if __name__=="__main__":
    main()
    