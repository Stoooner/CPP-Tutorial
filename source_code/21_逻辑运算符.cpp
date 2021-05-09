#include <iostream>
using namespace std;

int main(){
    // 逻辑非
    int a = 10; // 在C++中除了0，都是真
    cout << "逻辑非: " << !a << endl;
    cout << "逻辑非: " << !!a << endl;

    // 逻辑与(两个都为真结果才为真)
    int b = 0;
    cout << "逻辑与：" << (a&&b) << endl;

    // 逻辑或
    cout << "逻辑或：" << (a||b) << endl;
    
    system("pause");
    return 0;
}

