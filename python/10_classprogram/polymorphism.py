class Animal(object):
    def __init__(self,name):
        self.name = name
        
    def talk(self):
        raise NotImplemented("Subclass must implement abstract method")
    
class Cat(Animal):
    def talk(self):
        return "Meow!"
    
class Dog(Animal):
    def talk(self):
        return "Woof! Woof!"
        
    


def main():
    pass

if __name__=="__main__":
    main()