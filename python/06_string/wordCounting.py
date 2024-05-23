def main():
    with open("/home/hrd/Desktop/HRD/data/yesterday.txt", "r") as f:
        yesterday_lyric = f.read()
    
    print(yesterday_lyric)
    # contents = ""
    # for line in yesterday_lyric:
    #     contents += line.strip()+"\n"
    # n_of_yesterday = contents.upper().count("YESTERDAY")
    # print(f"Numver of a word 'Yesterday' : {n_of_yesterday}")
    print(yesterday_lyric.count("Yesterday"))
if __name__ == "__main__":
    main()
    
    