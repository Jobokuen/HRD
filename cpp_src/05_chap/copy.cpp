#include<iostream>
using namespace std;

int main(void){
    int a = 10, b = 20;
    int *pa = &a;
    int *pb = &b;

    cout << a << ' ' << b << endl;
    cout << *pa << ' ' << *pb << endl;

    pa = pb; // 주소만 복사

    cout << *pa << ' ' << *pb << endl;
    
    return 0;
}      