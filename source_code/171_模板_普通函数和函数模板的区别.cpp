#include <iostream>
using namespace std;
#include <unistd.h>

/*
    普通函数和函数模板的区别：
        - 普通函数调用时可以发生自动类型转换(隐式类型转换)
        - 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
        - 如果利用显示指定类型的方式，可以发生隐式类型转换
*/
// 普通函数
int myAdd01(int a, int b){
    return a+b;
}

template<typename T>
T myAdd02(T a, T b){
    return a + b;
}

void test01(){
    int a = 10;
    int b = 20;
    char c = 'c';
    // 普通函数调用时可以发生自动类型转换(隐式类型转换)
    // 这里将字符型隐式的转换为了整型
    cout << myAdd01(a, c) << endl;

    // 1. 模板中的自动类型推导(函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换)
    // cout << myAdd02(a, c) << endl;

    // 2. 显示指定类型(如果利用显示指定类型的方式，可以发生隐式类型转换)
    cout << myAdd02<int>(a, c) << endl;




}

int main(){
    test01();
    pause();
    return 0;
}