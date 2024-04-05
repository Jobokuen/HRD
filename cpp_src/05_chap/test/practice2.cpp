#include<iostream>
using namespace std;

// call by reference
void half_r(double &a){
    a =  a/2;
}

// call by address
void half_a(double *a){
    *a =  *a/2;
}

//call by value
void half_v(double a){
    a =  a/2;
}


int main(void){
    double n = 20;
    half_r(n);
    cout << n;
    return 0;
}

