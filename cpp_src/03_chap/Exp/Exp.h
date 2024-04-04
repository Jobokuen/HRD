#ifndef EXP_H
#define EXP_H
#include<iostream>
#include<cmath>
class Exp
{
private:
    int base;
    int exp;
public:
    Exp();  
    Exp(int base);
    Exp(int base, int exp);
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp base);
};

#endif