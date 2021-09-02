#include <iostream>
using namespace std;
#include <unistd.h>

/*
    本阶段主要针对C++泛型编程和STL技术做详细讲解，讨论C++更深层的使用
    1. 模板
    1.1 模板的概念
        模板就是建立通用的模具，大大提高复用性，将类型参数话
    1.2 函数模板
        C++另一种编程思想称为泛型编程，主要利用的技术就是模板
        C++提供两种模板机制：函数模板和类模板
        1.2.1 函数模板语法
            - 函数模板的作用：建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表
            - 语法：template<typename T>
                   函数声明或者定义
            - 解释：template --> 声明创建模板
                   typename --> 表明其后面的符号是一种数据类型，可以用class代替
                   T --> 通用的数据类型，名称可以替换，通常为大写字母
            - 注意：
                1. 自动类型推导，必须推导出一致的数据类型T，才可以使用
                2. 模板必须要确定出T的数据类型，才可以使用
*/

// 函数模板
// 两个整型交换的函数
void swapInt(int &a, int &b){
    int temp = a;
    a = b;
    b = a;
}

// 函数模板
// ？纯虚函数的参数定死了，模板的方法定死了，两个制约条件相反自然不能代替
template<typename T> // 声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

// 模板必须要确定出T的数据类型，才可以使用
template<typename T>
void func(){
    cout << "func调用" << endl;
}

void test01(){
    int a = 10;
    int b = 20;
    char c = 'c';
    // 利用函数模板进行交换
    // 两种方式使用函数模板
    // 1. 自动类型推导：自动类型推导，必须推导出一致的数据类型T，才可以使用
    mySwap(a, b); //正确案例
    // 错误案例：mySwap(a, c); 推导不出一致的类型T
    cout << "a = " << a << ", b = " << b << endl;
    // 2. 显示指定类型
    // mySwap<int>(a, b);
    // cout << "a = " << a << ", b = " << b << endl;

    // func();报错，没有确定T的数据类型
    func<int>(); // 正确，确定了T的数据类型
}

int main(){
    test01();
    pause();
    return 0;
}