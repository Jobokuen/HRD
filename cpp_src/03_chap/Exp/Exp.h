#ifndef EXP_H
#define EXP_H
#include<iostream>
#include<cmath>
class Exp
{
private:
    int num;
    int exp;
public:
    Exp();  
    Exp(int a);
    Exp(int a, int b);
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp r);
};

#endif