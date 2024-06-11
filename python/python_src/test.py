arr = [49, 12, 100, 276, 33]
n = 27
answer = []

li1 = arr[0:len(arr):2]
li2 = arr[1:len(arr):2]

for i in range(len(arr)):
    if i%2 ==0:
        answer = li1
    else:
        answer = li2
        
print(answer)



    
    