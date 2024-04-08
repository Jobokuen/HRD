#include<iostream>
#include<string>
using namespace std;

class MyIntStack
{
private:
    int *p;
    int size;
    int tos;
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack &c);
    // ~MyIntStack();
    bool push(int a);
    bool pop(int &n);
    void view();
};

MyIntStack::MyIntStack()
{   tos = 0;
    size = 0;
}

MyIntStack::MyIntStack(int size){
    this->size = size;
    p = new int [size];
}

MyIntStack::MyIntStack(const MyIntStack &c){
    this->size = c.size;
    this->tos = c.tos;
    p = new int [c.size];
    p = c.p;
}

// MyIntStack::~MyIntStack(){
//     if(p) {delete [] p;}
// }

bool MyIntStack::push(int n){
    // p[tos] = n;
    p[tos] = n;
    tos += 1;
    if(tos > size) {
        tos = size-1;
        delete [] p;
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

void MyIntStack::view(){
    for (int i = 0; i < size; i++)
    {
        cout << p[i] << ' ';
    }
    cout << endl;
    
};


int main(void){
    MyIntStack a(10);
    a.push(10);
    a.view();
    a.push(20);
    a.view();

    MyIntStack b = a;
    b.view();
    b.push(30);
    b.view();

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값" << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값" << n << endl;
    
    return 0;
}