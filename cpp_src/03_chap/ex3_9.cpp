#include<istream>
using namespace std;

class PrivateAccessError        //access specifier
{
private:                        // 글래스 내의 멤버 함수만 접근 가능
    int a;
    void f();
    PrivateAccessError();
public:                         // 클래스 내의 모든 함수에게 접근 가능
    int b;
    PrivateAccessError(int x);
    void g();
};

PrivateAccessError::PrivateAccessError() : PrivateAccessError(1){}
PrivateAccessError::PrivateAccessError(int x)
{   a = b = x;
}

PrivateAccessError::~PrivateAccessError()
{
}

void PrivateAccessError::f(){
    a = b = 5;
}

void PrivateAccessError::g(){
    a = b = 6;
}
int main(void){
    PrivateAccessError obja;
    PrivateAccessError objb(100);
    objb.a = 10;
    objb.b = 20;
    objb.f();
    objb.g();
    return 0;
}