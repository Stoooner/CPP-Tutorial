#include <iostream>
using namespace std;
#include <unistd.h>
#include <functional>
/*
    概念： STL内建的一些函数对象
    分类： - 算术仿函数
          - 关系仿函数
          - 逻辑仿函数
    用法：1. 这些仿函数所产生的对象、用法和一般函数完全相同
         2. 使用内建函数对象，需要引入头文件#include <functional>
    
    ========================================================
    算术仿函数：
        功能描述：实现四则运算
                其中negate是一元运算，其他是二元运算
        仿函数原型：
                - template<class T> T plus<T> // 加法仿函数
                - template<class T> T minus<T> // 减法仿函数
                - template<class T> T multiplies<T> // 乘法仿函数
                - template<class T> T divides<T> // 除法仿函数
                - template<class T> T nodulus<T> // 取模仿函数
                - template<class T> T negate<T> // 取反仿函数
*/

void test01(){
    negate<int> n; //得到negate函数对象，取名为n
    cout << n(50) << endl; // 对50进行取反

    plus<int> p; // 相加的仿函数，模板参数列表中仅仅写一个数据类型即可，它默认传入的两个数据都是同一个类型的
    cout << p(10, 20) << endl;
}

int main(){
    test01();
    pause();
    return 0;
}