#include <iostream>
using namespace std;
#include <unistd.h>

/*
    静态成员是在成员变量和成员函数前加上关键字static，称为静态成员
    静态成员分为：
        1. 静态成员变量：
            - 所有对象共享同一份数据；
            - 在编译阶段分配内存；
            - 类内声明，类外初始化；
        2. 静态成员函数：
            - 所有对象共享同一个函数；
            - 静态成员函数只能访问静态成员变量
*/

class Person{
public:
    // - 所有对象共享同一份数据；
    // - 在编译阶段分配内存；
    // - 类内声明，类外初始化；
    static int m_A;
    // 需要注意的是静态成员变量也是有访问权限的

    int m_C; // 非静态成员变量

    static void func(){
        m_A = 50; // 静态的成员函数是可以访问静态成员变量
        // m_C = 300; // 静态成员函数不可以访问非静态成员变量，所以这句报错
        // 这是因为非静态成员，每个对象都有各自的这个非静态成员变量，但是静态成员函数只有一个，这种情况之下，会造成编译器不知道是修改的哪个对象的这个非静态成员变量
        cout << "static void func调用" << endl;
    }
private:
    static int m_B;
    // 静态成员函数也是有访问权限的
    static void func2(){
        
    }
};
// - 类内声明，类外初始化；
int Person::m_A = 100;
int Person::m_B = 200;

void test01(){
    Person p1;
    cout << p1.m_A << endl;

    Person p2;
    p2.m_A = 200;
    cout << p1.m_A << endl;
}

void test02(){
    // 静态成员变量不属于某个对象上，所有对象都共享同一份数据
    // 因此静态成员变量有两种访问方式
    // 1. 通过对象进行访问
    // Person p;
    // cout << p.m_A << endl;

    // 2. 通过类名进行访问
    cout << Person::m_A << endl;

    // 不可访问，会报错，类外访问不到私有静态成员变量
    // cout << Person::m_B << endl;
}

void test03(){
    // 1. 通过对象访问静态成员函数
    Person p1;
    p1.func();

    // 2. 通过类名调用静态成员函数
    Person::func();
}

int main(){
    // test01();
    // test02();
    test03();
    pause();
    return 0;
}