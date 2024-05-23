class SoccerPlayer(object):
    def __init__(self, name, position, age):
        self.name = name
        self.position = position
        self.age = age

    def change_age(self, age = 15):
        self.age = age
        
    def __str__(self):
        return f"Hello, My name is {self.name}. i'm {self.age} years old and i play in {self.position} "


def main():
    player1 = SoccerPlayer("손흥민","midplayer",20)
    print(player1)
    print(player1.name, player1.age)
    player1.change_age()
    print(player1.age)
    player1.change_age(46)
    print(player1.age)
    print(player1)

if __name__=="__main__":
    main()