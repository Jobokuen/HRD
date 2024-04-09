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
    MyIntStack(int size);
    MyIntStack(const MyIntStack &c);
    ~MyIntStack();
    bool push(int a);
    bool pop(int &n);
    void view();
};

MyIntStack::MyIntStack(int size){
    this->size = size;
    tos = 0;
    p = new int [size] {0};
    
}

MyIntStack::MyIntStack(const MyIntStack &c){
    size = c.size;
    tos = c.tos;
    p = new int [c.size];
    for (int i = 0; i < c.size; i++)
    {
        p[i] = c.p[i];
    }
}

MyIntStack::~MyIntStack(){
    if(p) {delete [] p;}
}

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
    n = p[tos-1];
    tos -= 1;
    if(tos < -1){
        tos = 0;
        return false;
    }
    else{
        p[tos] = 0;
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
    a.push(20);
    // a.view();
    MyIntStack b = a;
    b.push(30);
    // a.view();
    // b.view();
    
    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값" << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값" << n << endl;
    // a.view();
    // b.view();
    
    return 0;
    
}