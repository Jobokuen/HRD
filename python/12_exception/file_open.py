def main():
    filename = "/home/hrd/Desktop/HRD/data/yesterday.txt"
    
    # with open(filename, "r") as f:
    #     contents = f.read()
    # print(contents)
    
    
    # with open(filename,"r") as f:
    #     while con := f.readline():
    #         print(con)
    
    
    with open(filename,"r") as f:
        cont = f.read()
        word_list = cont.split(" ")
        line_list = cont.split("\n")
        
    print(len(cont))
    print(len(word_list))
    print(len(line_list))
    
if __name__=="__main__":
    main()
    
    # := >> 변수의 저장과 동시에 비교를 같이 할 경우