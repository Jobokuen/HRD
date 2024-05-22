def min():
    for looper in [1,2,3,4]:
        print("hello",looper,end=" ")       # defalt end = "\n"
        print("world")
    
    for looper in range(10):
        print("hello",end=" ")
    print(" ")
    
    for i in range(0,100,2):                # range(start,end,step)
        print(i,end=" ")
    print(" ")
    
    for i in "abcdefg":                     # ' " 차이가 없다(str)
        print(i,end=" ")
    print(" ")
    

if __name__ == "__main__":
    min()
    