#include <iostream>
using namespace std;
#define day 7

int main(){
    // 默认情况下，右边的数值3.14在编辑器中时，编辑器默认将其认成双精度double类型，因此一般单精度float数据末尾会加上字母f
    float f1 = 3.14f;
    double d1 = 3.14;
    // 默认情况下输出一个小数，会显示出6位有效数字
    cout << "f1 = " << f1 << endl;
    cout << "d1 = " << d1 << endl;
    cout << "float = " << sizeof(float) << endl;
    cout << "double = " << sizeof(double) << endl;
    // 科学计数法
    float f2 = 3e2; // 3 * 10^2
    cout << "f2 = " << f2 << endl;
    float f3 = 3e-2; // 3 * 10^-2
    cout << "f3 = " << f3 << endl;
    system("pause");
    return 0;
}

