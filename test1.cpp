#include<iostream>
using namespace std;

int main(void){
    int count;
    cin >> count;
    int numList[count] = {0};
    for (int i = 0; i < count; i++)
    {
        cin >> numList[i];
        cout << numList[i] << ' ';
    }
    cout << endl;
    // 재배열
    while(1){
        
    }
    for (int i = 0; i < count; i++)
    {
        cout << numList[i] << ' ';
    }
    
    return 0;
}
//5
//20 10 35 30 7