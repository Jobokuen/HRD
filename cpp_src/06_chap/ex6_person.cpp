#include<iostream>
using namespace std;

class Person
{
public:
    int money;
    void addMoney(int money){
        this ->money += money;
    }
    static int shareMoney;
    static void addShared(int n){
        shareMoney += n;
    }
};

int Person::shareMoney = 10;

int main(void){
    Person han;
    han.money = 100;
    han.shareMoney = 200;

    Person lee;
    lee.money = 150;
    lee.addMoney(200);
    lee.addShared(200);

    cout << han.money << ' ' << lee.money << endl;
    cout << han.shareMoney << ' ' << lee.shareMoney << endl;
}

