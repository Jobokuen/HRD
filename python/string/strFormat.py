def main():
    a, b, c = 1, 2, 3
    print("first: %d second: %d third: %d" % (a,b,c))
    print(f"first: {a} second: {b} third: {c}")
    print("first: {:.2f} second: {:.3f} third: {:.4f}".format(a,b,c))
    print("first: {1:.2f} second: {2:.3f} third: {0:.4f}".format(a,b,c))                # 변수위치변경
    print("first: {1:6.2f} \nsecond: {2:6.3f} \nthird: {0:6.4f}".format(a,b,c))         # 정렬
    print("first: {1:-6.2f} \nsecond: {2:-6.3f} \nthird: {0:-6.4f}".format(a,b,c))      # - 좌측정렬
    




if __name__ == "__main__":
    main()
    
    