#include <iostream>
using namespace std;

// do...while会先执行一次循环语句，再判断循环条件
int main(){
    cout << "1" << endl;
    cout << "2" << endl;
    goto FLAG;
    cout << "3" << endl;
    cout << "4" << endl;
    FLAG:
    cout << "5" << endl;
    
    system("pause");
    return 0;
}

