def main():
    a = set([1,2,3,1,2,3])
    print(a)
    a.add(7)
    print(a)
    a.remove(1)
    print(a)
    a.update([1,4,5,6,8])
    print(a)
    a.clear()
    print(a)



if __name__ == "__main__":
    main()
    
    