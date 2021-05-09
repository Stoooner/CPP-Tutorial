#include <iostream>
using namespace std;

int main(){
    // 取模运算的性质： 一个数对n取模的结果是，得到[0, n)之间的数，注意是闭开区间，也就是0 ~ n-1
    cout << "取模/取余运算：" << 10%3 << endl;
    cout << "取模/取余运算：" << 10%20 << endl;
    // C++中的规定，两个小数是不能做取模运算的：下面是错误的例子
    // cout << 3.5%2.1 << endl;
    system("pause");
    return 0;
}

