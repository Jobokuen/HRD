import matplotlib.pyplot as plt
import numpy as np

def main():
    # 산점도(scatter plot)
    # 2차원 평면에 표현할 때 사용하는 그래프
    data_1 = np.random.rand(512,2)
    data_2 = np.random.rand(512,2)
    
    plt.scatter(data_1[:,0], data_1[:,1], c='b',marker='x')
    plt.scatter(data_2[:,0], data_2[:,1], c='r',marker='o')
    
    plt.show()
    
    # size : 3차원 데이터를 잘 활용할 수 있다.(ex. 인구밀도)
    N = 50
    x = np.random.rand(N)
    y = np.random.rand(N)
    colors = np.random.rand(N)    
    area = np.pi*(15 * np.random.rand(N)**2)
    plt.scatter(x,y,s=area,c=colors,alpha=0.5)
    
    plt.show()
    

if __name__=="__main__":
    main()