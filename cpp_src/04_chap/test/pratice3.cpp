#include <iostream>
#include <string>
using namespace std;


// string at()
int main(void){
    string text;
    cin >> text;

    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if(text.at(i) = 'a'){
            count++;
        }
    }
    cout << "문자 a는 " << count << "개 있습니다." << endl;


    return 0;
}

// string find
int main(void){
    string text;
    cin >> text;

    int count = 0;
    
    for (int i = 0; i < text.length(); i++)
    {
        if(text.find(text, 'a')){
            count++;
        }
    }
    
    cout << "문자 a는 " << count << "개 있습니다." << endl;


    return 0;
}