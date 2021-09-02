#include <iostream>
using namespace std;
#include <unistd.h>
// 第一种方式是直接包含源文件
// #include "person.cpp"
// 第二种解决方式：将.h和.cpp中的内容写到一起，将后缀名改为.hpp
#include "person.hpp"

/*
    问题：
        类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
    解决办法：
        1. 直接包含.cpp源文件
        2. 将声明和实现写到同一个文件中，并改后缀名为.hpp，hpp是约定的名称，并不是强制
*/

// template<class NameType, class AgeType=int>
// class Person{
// public:
//     Person(NameType name, AgeType age);

//     void showPerson();

//     NameType m_Name;
//     AgeType m_Age;
// };

// // 类模板的构造函数的类外实现
// template<class T1, class T2>
// Person<T1, T2>::Person(T1 name, T2 age){
//     this->m_Name = name;
//     this->m_Age = age;
// }

// // 类模板的成员函数的类外实现
// template<class T1, class T2>
// void Person<T1, T2>::showPerson(){
//     cout << "name = " << this->m_Name << ", age = " << this->m_Age << endl;
// }

void test01(){
    Person<string, int> p("Tom", 20);
    p.showPerson();
}

int main(){
    test01();
    pause();
    return 0;
}