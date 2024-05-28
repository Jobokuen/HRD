import matplotlib.pyplot as plt
import numpy as np

def main():
    
    x = np.linspace(0,100,100)
    y = np.linspace(0,100,100)
    plt.plot(x,y)
    plt.show()
    
    # # numpy를 활용
    # x_1 = range(100)
    # y_1 = [np.cos(value) for value in x]
    
    # x_2 = range(100)
    # y_2 = [np.sin(value) for value in x]
    
    # # plt.plot(x_1,y_1)
    # plt.plot(x_2,y_2)
    # plt.show()
    
    # # 그림과 축
    # fig, ax = plt.subplots()
    # ax.plot(x_1,y_1)
    # ax.set(title = 'cos graph', xlabel = "X", ylabel = 'Y')
    # plt.show()


if __name__=="__main__":
    main()