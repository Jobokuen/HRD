import os
import random, datetime

#현재 워킹 디렉토리 확인
print(os.getcwd())

if not os.path.isdir("log"):
    os.mkdir("log")
    
if not os.path.exists("log/count_log/txt"):
    with open("log/count_log.txt", "w", encoding = "UTF8") as f:
        f.write("기록이 시작된다.\n")
        
with open("log/count_log.txt" , "a", encoding="UTF8") as f:
    for i in range(1,11):
        stamp = str(datetime.datetime.now())
        value = random.random() * 1000000
        log_time = stamp + "\t" + str(value) + "값이 생성되었습니다.\n"
        f.write(log_time)
    