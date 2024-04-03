#include"Date.h"
using namespace std;

int main (void){
    Date birth(2014, 3, 20);
    // Date independenceDay(1945/8/15);
    // independenceDay.show();
    cout << birth.getYear << ',' << birth.getMonth << ',' << birth.getday << endl;
}