#include<iostream>
#include<string>
using namespace std;


int main(void){
    string str;
    string address("서울시 성북구 삼선동 389");
    string copyAddress(address);

    char text[] = {'L','O','V','E',' ','C','+','+','\0'};
    string title(text);

    
    string *p = new string("C++");
    cout << str << endl;
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;
    cout << *p << endl;

    delete p; 
    
    return 0;
}