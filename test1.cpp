#include<iostream>
using namespace std;

void changeArray(int numArray[], int &count){
    for (int i = 0; i < count -1; i++)
    {
        if (numArray[i] > numArray[i+1])
        {
            int temp = numArray[i];
            
        }
        
    }
    

}

int main(void){
    int count;
    cin >> count;
    int numList[count] = {0};
    for (int i = 0; i < count; i++)
    {
        cin >> numList[i];
    }
    changeArray(numList, count);
    

    cout << numList[0] << ' ' << numList[count];
    return 0;
}
