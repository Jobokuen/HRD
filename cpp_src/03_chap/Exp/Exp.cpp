#include"Exp.h"
using namespace std;

Exp::Exp(){};

Exp::Exp(int base){
    this->base = base , exp = 1;
}

Exp::Exp(int base, int exp){
    this->base = base , this->exp = exp;
}

int Exp::getValue(){
    int result;
    result = pow(this->base, this->exp);
    return result;
} 
int Exp::getBase(){
    return this->base;
}
int Exp::getExp(){
    return this->exp;
    
}

bool Exp::equals(Exp anything){
        return (getValue() == anything.getValue());
        
    
    
    
}

// if (r.num == num && r.exp == exp)