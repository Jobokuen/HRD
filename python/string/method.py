

def main():
    a = str()
    text = "TeamLAB X Inflearn"
    Utext = text.upper()
    print(Utext)
    print(text)
    
    print(text.count('a'))
    print(len(text))
    li1 = text.split(sep='X')
    print(li1[0])

if __name__ == "__main__":
    main()