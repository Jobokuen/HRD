def print_something1(my_name, your_name):
    print(f"Hello {your_name}, my name is {my_name}")

def print_something2(my_name, your_name="TEAMLAB"):
    print(f"Hello {your_name}, my name is {my_name}")

def main():
    print_something1("Sungchul", "TEAMLAB")
    print_something1(your_name="TEAMLAB", my_name="Sungchul")
    print()
    print_something2("Sungchul", "TEAMLAB")
    print_something2("Sungchul")
    

if __name__ == "__main__":
    main()
    