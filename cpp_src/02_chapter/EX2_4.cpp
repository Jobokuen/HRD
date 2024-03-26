#include<iostream>
using namespace std;
#define LEN 6

int main(void){
    cout << "이름을 입력하세요: ";
    unsigned char name [LEN] ; 

    cin >> name ;

    cout << "이름은 " << name << "입니다.\n";

    return 0;
}