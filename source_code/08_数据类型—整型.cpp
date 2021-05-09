#include <iostream>
using namespace std;
#define day 7

/* 1. C++规定在创建一个变量或者常量时需要指定其对应的数据类型，否则无法给变量分配内存 
   2. 数据类型存在的意义在于给变量分配一段合适的内存空间
   3. 数据类型对应的占用空间影响到其对应的取值范围
   4. sizeof关键字能够统计数据类型所占内存大小(字节): sizeof(数据类型) 或者sizeof(变量)
*/
int main(){
    // 短整型(-32768 ~ 32767)
    short num1 = 32768; // 超过其能表示的数值上限时，它将转回其下限
    // 整型
    int num2 = 10;
    // 长整型
    long num3 = 10;
    // 长长整型
    long long num4 = 10;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    cout << "short占用的内存空间大小 = " << sizeof(short) << endl;
    cout << "longlong占用的内存空间大小 = " << sizeof(num4) << endl;


    system("pause");
    return 0;
}