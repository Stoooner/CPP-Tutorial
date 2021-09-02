#include <iostream>
using namespace std;
#include <unistd.h>

/*
    C++允许一个类继承多个类
    语法：class 子类:继承方式 父类1, 继承方式 父类2, ...
    多继承可能引发父类中同名成员出现，需要加作用域区分
    C++实际开发中不建议用多继承
*/

class Base1{
public:
    Base1(){
        m_A = 100;
    }
    int m_A;
};

class Base2{
public:
    Base2(){
        m_A = 200;
    }
    int m_A;
};

// 子类，需要继承Base1和Base2
class Son:public Base1, public Base2{
public:
    Son(){
        m_C = 300;
        m_D = 400;
    }
    int m_C;
    int m_D;
};

void test01(){
    Son s;
    // sizeof(s) = 16，自己的两个加上两个父类各自一个，4*4=16
    cout << "子类对象的大小：" << sizeof(s) << endl;
    // 不同父类中继承下来的成员存在重名情况时需要使用作用域进行区分
    cout << "base1_m_A = " << s.Base1::m_A << endl; 
    cout << "base2_m_A = " << s.Base2::m_A << endl; 
}

int main(){
    test01();
    pause();
    return 0;
}