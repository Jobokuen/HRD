#include <iostream>
using namespace std;        // 

int main()
{
    cout << "------------cout--------------" << "\n";
    cout << "Hello" << "\n";
    cout << "world!" << "\r" << "\n";   
    cout << 'H' << 'e' << 'l' << 'l' << 'o' << "\n" ; 

    cout << "-------------cin--------------" << "\n" << "\n";

    int width;
    int height;
    cout << "너비와 높이를 입력하세요: ";
    cin >> width >> height;
    cout << "넓이: " << width << '\n' << "높이" << height << '\n';

    cout << "-------------cin--------------" << "\n" << "\n";

    return 0;
}