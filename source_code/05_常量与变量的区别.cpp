#include <iostream>
using namespace std;
#define day 7

/* 1. 常量的作用：用于记录程序中不可更改的数据
   2. C++中定义常量的两种方式：
      2.1 #define 宏常量： #define 常量名 常量值
          - 通常在文件上方定义， 表示一个常量
      2.2 const修饰的常量：const 数据类型 常量名 = 常量值
          - 通常在常量定义前加上关键字const，修饰该变量为常量，不可修改
    3. const修饰的常量与define定义的常量的区别：
        - https://www.cnblogs.com/scut-linmaojiang/p/4722338.html；
        - https://blog.csdn.net/sinat_20265495/article/details/52945960
        - https://blog.csdn.net/javaious/article/details/19354133
    4. 标识符(变量名)不能是关键字，它是由字母、数字、下划线组成，标识符第一个字符只能是字母或者下划线，标识符区分大小写
*/

int main(){
    // 变量作用：给一段指定的内存空间起名字，方便操作这段内存
    // 数据类型 变量名 = 变量值;
    cout << "一周总共有：" << day << endl;
    const int month = 12;
    cout << "一年有：" << month << "月份" << endl;
    system("pause");
    return 0;
}