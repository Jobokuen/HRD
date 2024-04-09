#include<iostream>
using namespace std;

float square(float a){
    return a*a;
}

double square(double a){
    return a*a;
}

int main(void){
    cout << square(3.0) << endl;
    cout << square(3) << endl;
    return 0;
}

// 이 두 함수중 어떤 함수를 호출하는지 알 수 없다는 오류 메시지