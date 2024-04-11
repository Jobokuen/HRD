#include<iostream>
using namespace std;



class Power
{
    int kick;
    int punch;
public:
    Power(int kick = 0, int punch = 0){
        this->kick = kick; this->punch = punch;
    }
    void show();
    Power operator+ (Power op2);
    Power operator- (Power op2);
    bool operator== (Power op2);
    Power operator+= (Power op2);
    Power sum(Power a, Power b){
        Power temp;
        temp.kick = a.kick + b.kick;
        temp.punch = a.punch + b.punch;
        return temp;
    }
    Power sum(Power op){
        Power temp;
        temp.kick = this->kick + op.kick;
        temp.punch = this->punch + op.punch;
        return temp;
    }
    friend Power sum(Power &a, Power &b);
};

void Power::show(){
    cout << "kick=" << kick << "," << "punch=" << punch << endl;
}

Power Power::operator+ (Power op2){
    Power temp;
    temp.kick = this->kick + op2.kick;
    temp.punch = this->punch + op2.punch;
    return temp;
}
Power Power::operator- (Power op2){
    Power temp;
    temp.kick = this->kick - op2.kick;
    temp.punch = this->punch - op2.punch;
    return temp;
}

bool Power::operator== (Power op2){
    if(this->kick == op2.kick && this->punch == op2.punch) return true;
    else return false;
}

Power Power::operator+= (Power op2){
    this->kick = this->kick + op2.kick;
    this->punch = this->punch + op2.punch;
    return *this;
}

Power sum(Power &a, Power &b);

int main(void){
    Power a(3,5), b(4,6), c, d;
    c = c.sum(a,b);
    a.show();
    b.show();
    c.show();
    c = a.sum(b);
    c.show();
    c = sum(a,b);
    c.show();
    c = a + b;
    c.show();
    c = a - b;
    c.show();
    if(a == b) cout << "true" << endl;
    else cout << "false" << endl;

    d = a+=b;
    d.show();
    a.show();

    return 0;
}

Power sum(Power &a, Power &b){
    Power temp;
    temp.kick = a.kick + b.kick;
    temp.punch = a.punch + b.punch;

    return temp;
}