#include<iostream>
#include<string>
using namespace std;

class MyIntStack
{
private:
    int p[10];
    int tos;
public:
    MyIntStack();
    bool push(int a);
    bool pop(int &n);
};

MyIntStack::MyIntStack()
{   p[10] = {0};
    tos = 0;
}

bool MyIntStack::push(int n){
    p[tos] = n;
    tos += 1;
    if(tos > 10) {
        tos = 9;
        return false;
    }
    else return true;
}

bool MyIntStack::pop(int &n){
    n = p[tos];
    tos -= 1;
    if(tos < -1){
        tos = 0;
        return false;
    }
    else{
        p[tos+1] = 0;
        return true;
    } 
}


int main(void){
    MyIntStack a;
    for (int  i = 0; i < 11; i++)
    {
        if(a.push(i)) cout << i << ' ';
        else cout << endl << i+1 << " 번째 stack full" << endl;
    }
    int n;
    for (int i = 0; i < 11; i++)
    {
        if(a.pop(n)) cout << n << ' ';
        else cout << endl << i+1 << " 번째 stack empty";
    }
    cout << endl;
    
    return 0;
}