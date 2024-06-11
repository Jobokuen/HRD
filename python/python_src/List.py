def min():
    colors = ["red", "green", "blue","purple","yellow","black",12,25, 71, 3.14,7.8235]
    print(colors)
    for c in colors:
        print(c)
    print(len(colors))
    print(colors[5:8])
    print(colors[5:8:1]) #first, last, step
    print(colors[5:10:2]) #first, last, step
    print(colors[::-1]) #first, last, step
    
    
if __name__ == "__main__":
    min()
    