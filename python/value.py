def main():
    a = 7.6
    a = "hello world"
    o = object()
    print(o)
    print(type(o))
    print(issubclass(type(a),int))
    print(issubclass(type(o),object))
    print(issubclass(type(a),object))
    
    


if __name__ == "__main__":
    main()
