#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>
/*
    左移运算符重载作用：可以输出自定义数据类型
    因此左移运算符配合友元技术可以实现输出自定义数据类型
*/

class Person{
friend ostream & operator<<(ostream &cout, Person &p);
public:
    Person(int a, int b){
        m_A = a;
        m_B = b;
    }
private:
    int m_A;
    int m_B;
    // 1. 通常不会利用成员函数重载左移运算符，因为无法实现cout标志符在左侧
    // void operator<<(Person ){

    // }
};

// 2. 只能利用全局函数重载左移运算符
// ostream &cout: cout为标准输出流类型的对象，且全局只应有一个这个对象，因此使用ostream &cout
// 如果要使用链式调用，那么返回值就要作为下一个调用的参数，参数和返回值的类型就必须要统一
// 而这里ostream类型必须是引用类型，所以返回值必须是引用
ostream & operator<<(ostream &cout, Person &p){ // 本质： operator<<(cout, p), 其简化形式为：cout << p
    cout << "m_A = " << p.m_A << ", m_B = " << p.m_B;
    return cout;
}

void test01(){
    Person p(10, 10);
    // 链式编程
    cout << p << ", hello " << "world!" << endl;
}

int main(){
    test01();
    pause();
    return 0;
}