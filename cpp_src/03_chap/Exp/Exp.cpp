#include<istream>
#include<cmath>
#include"Exp.h"
using namespace std;

Exp::Exp() : Exp(1){}

Exp::Exp(int a){
    num = a , exp = 1;
}

Exp::Exp(int a, int b){
    num = a , exp = b;
}

int Exp::getValue(){
    int result;
    result = pow(num, exp);
    return result;
}
int Exp::getBase(){
    return num;
}
int Exp::getExp(){
    return exp;
    
}

bool Exp::equals(Exp r){
    
    return true;
}