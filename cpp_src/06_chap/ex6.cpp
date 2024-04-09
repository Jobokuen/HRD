#include<iostream>
using namespace std;

int sum(int a, int b = 13 , int c = 5){
    return a+b+c;
}

int main(void){
    int result = 0;
    result = sum(10);
    cout << result << endl;
    result = sum(10,20);
    cout << result << endl;
    result = sum(10,20,30);
    cout << result << endl;

    return 0;
}