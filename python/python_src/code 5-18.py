#5-14
def kwargs_test(**kwargs):
    print(kwargs)
    print(type(kwargs))
    print(f"첫번째 변수는 {kwargs['first']}이다")
    print(f"두변째 변수는 {kwargs['second']}이다")
    print(f"세번째 변수는 {kwargs['third']}이다")
    for key, value in kwargs.items():
        print(f"Key: {key} : Value: {value}")

def main():
    print(kwargs_test(first = 3, second = 4, third = 5))
    

if __name__ == "__main__":
    main()
    