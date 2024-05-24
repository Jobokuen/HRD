# for i in range(10):
#     try:
#         result = 10/i
#     except ZeroDivisionError:
#         print("Not divided by 0")
#     else:
#         print(10/i)
        


for i in range(10):
    try:
        result = 10/i
    except ZeroDivisionError:
        print("Not divided by 0")
    finally:
        print(10/i)     # 에외 발생 여부와 상관없이 실행되는 코드
        
