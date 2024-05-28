import matplotlib.pyplot as plt
import numpy as np

def main():
    x = np.linspace(-1,1,100)
    y_1 = np.sin(x)
    y_2 = np.cos(x)
    y_3 = np.tan(x)
    y_4 = np.exp(x)


    ax = plt.subplot(2,2)
    
    ax[0,0].plot(x,y_1)
    ax[0,1].plot(x,y_2)
    ax[1,0].plot(x,y_3)
    ax[1,1].plot(x,y_4)
    
    plt.show()

if __name__=="__main__":
    main()