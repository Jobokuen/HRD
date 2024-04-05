#include<iostream>
using namespace std;

bool bigger (int a, int b, int& big){
    if(a == b) return true;
    else if(a > b){
        big = a;
        return false;
    }else if(a < b){
        big = b;
        return false;
    }
}

int main(void){
    int a = 4;
    int b = 5;
    int c;
    bigger(a,b,c);
    cout << c;
}