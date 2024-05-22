def min():
    i =1
    while True:
        i +=1
        if i % 2 == 0:
            continue
        print(i,end=" ")
        if i == 11:
            print(" ")
            break
    
    # 삼항연산자
    x=5
    y=3
    if x>y:
        print("x는 y보다 큽니다.")
    else:
        print("y는 x보다 큽니다.")
        
    print("x는 y보다 큽니다.") if x>y else print("x가 y보다 작거나 같습니다.")

if __name__ == "__main__":
    min()
    