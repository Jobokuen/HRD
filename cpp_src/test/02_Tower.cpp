#include<iostream>
using namespace std;

class Tower{
public:
    int height;
    Tower();
    Tower(int M);
    ~Tower();
    int getHeight();
};

Tower::Tower() : Tower(1){}

Tower::Tower(int M){
    height = M;
}

int Tower::getHeight(){
    return height;
}

Tower::~Tower(){}

int main(void){
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
    return 0;
}