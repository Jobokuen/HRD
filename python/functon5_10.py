def calculate(x,y):
    total = x + y
    print("In function")
    print(f"a:{a}, b:{b}, total:{total} ")
    return total

a = 5
b = 7
total = 0
print("In Program - 1")
print(f"a:{a}, b:{b}, total:{total} ")

sum = calculate(a,b)
print("After Calculation")
print(f"a:{a}, b:{b}, total:{total}, sum: {sum}")
    