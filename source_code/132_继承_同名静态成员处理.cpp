#include <iostream>
using namespace std;
#include <unistd.h>

/*
    当子类与父类出现同名的静态成员时：
        - 访问子类同名成员，直接访问即可
        - 访问父类同名成员，需要加作用域
*/

class Base{
public:
    static int m_A;
    static void func(){
        cout << "Base-static-func调用" << endl;
    }
    static void func(int a){
        cout << "Base-static-func(int a)调用" << endl;
    }
};

int Base::m_A = 100;

class Son:public Base{
public:
    static void func(){
        cout << "Son-static-func调用" << endl;
    }

    static int m_A;
};

int Son::m_A = 200;

// 同名的静态成员属性处理方式
void test01(){
    // 1. 对于静态成员属性可以通过对象访问
    Son s;
    cout << "通过对象访问: " << endl;
    cout << "Son中的m_A: " << s.m_A << endl;
    cout << "Base中的m_A: " << s.Base::m_A << endl;

    // 2. 对于静态成员属性还可以通过类名访问
    cout << "通过类名访问: " << endl;
    cout << "Son中的m_A: " << Son::m_A << endl;
    // 从左到右第一个::代表通过类名进访问，第二个::代表访问父类作用域下的静态成员变量
    cout << "Base中的m_A: " << Son::Base::m_A << endl;
}
// 同名的静态成员函数处理方式
void test02(){
    Son s;
    cout << "通过对象的方式：" << endl;
    s.func(); // 直接调用是调用的子类中的同名成员函数
    s.Base::func();

    // 2. 通过类名访问
    cout << "通过类名的方式：" << endl;
    Son::func();
    Son::Base::func();

    // 3. 如果子类中出现了和父类同名的静态成员函数，子类的同名成员会隐藏掉父类中所有的静态同名成员函数，不能直接进行访问
    // 只要通过作用域就能访问父类中被隐藏的静态同名成员函数
    s.Base::func(10);
}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}