#include <iostream>
using namespace std;

int main(void){
    double num = 0;
    int *p = new int[5];
    if(!p)
        return 0;
    
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < 5; i++)
    {
        num = num + p[i];
    }
    cout << "평균 " << num/5 << endl;

    delete [] p;
    return 0;
}