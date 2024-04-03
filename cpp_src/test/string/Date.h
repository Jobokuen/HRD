#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
private:
    int year;
    int month;
    int day;
public:
    Date(char a);
    Date(int a, int b, int c);
    void show();
    int getYear();
    int getMonth();
    int getday();
};





#endif