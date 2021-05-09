#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 15;
    cout << (a > b ? a : b) << endl;
    (a > b ? a : b) = 105;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    system("pause");
    return 0;
}

