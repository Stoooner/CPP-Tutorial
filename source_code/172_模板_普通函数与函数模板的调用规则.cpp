#include <iostream>
using namespace std;
#include <unistd.h>

/*
    普通函数与函数模板的调用规则：
        - 如果函数模板和普通函数都可以调用，优先调用普通函数；
        - 可以通过空模板参数列表来强制调用函数模板；
        - 函数模板也可以发生重载；
        - 如果函数模板可以产生更好的匹配，优先调用函数模板
*/

void myprint(int a, int b){
    cout << "调用的是普通函数" << endl;
}

template<typename T>
void myprint(T a, T b){
    cout << "调用的是模板" << endl;
}

template<typename T>
void myprint(T a, T b, T c){
    cout << "调用的是重载了的模板" << endl;
}

void test01(){
    int a = 10;
    int b = 20;
    int c = 30;

    // 1. 如果函数模板和普通函数都可以实现，优先调用普通函数；
    // myprint(10, 20); 

    // 2. 可以通过空模板参数列表来强制调用函数模板；
    // myprint<>(a, b);

    // 3. 函数模板也可以发生重载
    // myprint(a, b, c);

    // 4. 如果函数模板可以产生更好的匹配，优先调用函数模板
    char c1 = 'a';
    char c2 = 'b';
    // 对于这样的调用，调用普通函数或者模板都能实现，因为普通函数调用时可以发生自动类型转换(隐式类型转换)
    // 但是实际结果是调用的模板，是因为：调用普通函数的话还要对数据做一次转换
    // 但是对于模板而言的话直接将T类型推导为char即可
    myprint(c1, c2);

}

int main(){
    test01();
    pause();
    return 0;
}