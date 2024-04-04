#include<iostream>
using namespace std;

int main(void){
    cout << "입력할 정수의 개수는";
    int n;
    cin >> n;
    int n;

    while (1)
    {
        cout << "입력할 정수를 기입하시오";
        cin >> n;
        if(n<= 0){
            continue;;
        }break;
    }
    cout << n << endl;

    int *p = new int[n];
    if(!p){
        cout << "메모리를 할당할 수 업습니다.";
        // return -1;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i+1 << "번째 정수: ";
        cin >> p[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    cout << "평균 = " << sum/n << endl;

    delete[] p;

    return 0;    
}


