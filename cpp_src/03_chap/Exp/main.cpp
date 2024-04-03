
#include"Exp.h"
using namespace std;

int main(void){
    Exp a(3,2);
    Exp b(9);
    Exp c;

    cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
    cout << "a의 base " << a.getBase() << ',' << "지수" << a.getExp() << endl;

    cout << a.equals(b) << endl;
    if (a.equals(b))
    {
        cout << "same" << endl;
    }else
        cout << "not same" << endl;
    
    return 0;
    
}

int pow(int a, int b){
    int result;
    for(int i = 1 ; i < b ; ++i){
        result = result * a;
    }
    return result;
}