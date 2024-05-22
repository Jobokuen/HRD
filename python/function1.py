def f(x):
    y = x
    x = 5
    return y * y

def spam(eggs):
    eggs.append(1)
    eggs = [2,3]

def main():
    ham = [0]
    spam(ham)
    print(ham)
    

if __name__ == "__main__":
    main()
    