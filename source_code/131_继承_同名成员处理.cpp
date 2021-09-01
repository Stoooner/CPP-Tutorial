#include <iostream>
using namespace std;
#include <unistd.h>

/*
    当子类与父类出现同名的成员时：
        - 访问子类同名成员，直接访问即可
        - 访问父类同名成员，需要加作用域
*/

class Base{
public:
    int m_A;
    Base(){
        m_A = 10;;
    }

    void func(){
        cout << "Base-func调用" << endl;
    }
    void func(int a){
        cout << "Base-func(int a)调用" << endl;
    }
};

class Son:public Base{
public:
    Son(){
        m_A = 200;
    }
    void func(){
        cout << "Son-func调用" << endl;
    }

    int m_A;
};

// 同名的成员属性处理方式
void test01(){
    Son s;
    cout << "Son中的m_A: " << s.m_A << endl;
    cout << "Base中的m_A: " << s.Base::m_A << endl;
}
// 同名的成员函数处理方式
void test02(){
    Son s;
    s.func(); // 直接调用是调用的子类中的同名成员函数
    s.Base::func();
    // 如果子类中出现了和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有的同名成员函数，不能直接进行访问
    // 只要通过作用域就能访问父类中被隐藏的同名成员函数
    s.Base::func(10);
}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}