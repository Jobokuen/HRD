#include <iostream>
using namespace std;

class WordGame
{
private:
    char word;
    Player name;
public:
    WordGame(){word = NULL;};
    void start();
    void firstWord(char word);
    void process();
};

void WordGame::start(){
    cout << "끝말 잇기 게임을 시작합니다" << endl;
    cout << "게임에 참가하는 인원은 몇명입니까?" << endl;};

void WordGame::firstWord(char word){
    this-> word = word;
    cout <<"시작은 " << word << "입니다.";
    }

void WordGame::process(){
    cout << name;
    char code;
    cin >> code;

    while(1){
        string forward = word;
        string after = code;

        if(forward.at(4) == after.at(0) && forward.at(5) == after.at(1)){
            code = word;
            cin >> code;
        }else{
            cout << "Game over";
            break;
        }
    }
}


class Player
{
private:
    int playerNumber;
    char name;
public:
    Player(char name) {this->name = name;};
    void inputName();
};

void Player::inputName(){
    cin >> name;
}


int main(void){
    int count = 0;
    
    WordGame game_1;
    game_1.start();
    cin >> count;

    Player List[count] ;
    List[0].inputName();
    List[1].inputName();
    List[2].inputName();

    game_1.firstWord('아버지');
    game_1.process();

    return 0;
}