#5-14
def asterisk_test(a,b,*args):
    return a+b+sum(args)

#5-16
def asterisk_test_2(*args):
    x, y,*z = args
    return x, y, z

def main():
    print(asterisk_test_2(3,4,5))
    

if __name__ == "__main__":
    main()
    