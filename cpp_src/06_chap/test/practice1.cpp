#include<iostream>
using namespace std;

// int add(int* A, int k, int *B);
// {    int result = 0;
//     for (int i = 0; i < k; i++)
//     {
//         result = result + *(A+i);
//     }
//     return result;
// }


int add(int A[0] , int k, int B[0]){
    int result = 0;
    for (int i = 0; i < k; i++)
    {
        result = result + A[i];
    }
    for (int i = 0; i < k; i++)
    {
        result = result + B[i];
    }
    return result;
}

int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};

    // int c = add(a,5);
    int d = add(a, 5, b);

    // cout << c << endl; // 15
    cout << d << endl; // 55
    return 0;
}