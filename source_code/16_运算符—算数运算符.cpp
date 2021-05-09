#include <iostream>
using namespace std;

int main(){
    int a1 = 10;
    int b1 = 3;
    cout << "加法：" << a1+b1 << endl;
    // 在C/C++中两个整数做相除的运算，结果依然是整数(小数位都舍弃掉, 注意不是四舍五入，而是直接舍弃掉)
    cout << "整数除法：" << a1/b1 << endl;
    cout << "整数除法：" << 10/20 << endl;
    // 小数除法
    double d1 = 0.7;
    double d2 = 0.3;
    cout << "小数除法：" << d2/d1 << endl;
    system("pause");
    return 0;
}

