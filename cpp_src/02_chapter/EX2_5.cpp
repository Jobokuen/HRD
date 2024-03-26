#include<iostream>
#include<cstring>
#define LEN 11
using namespace std;


int main(void){
    char password[LEN];
    cout << "비번을 입력하세요(11자): " << endl ;

    while (true)
    {
        cout << "암호: ";
        cin >> password;
        if(strcmp(password,"zxcasd") == 0){
            cout << "프로그램을 정상 종료합니다." << endl;
            break;
        }else
        cout << "암호가 틀렸습니다."<< endl;
    }
    

    return 0;
}