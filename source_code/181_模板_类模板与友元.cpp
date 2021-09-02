#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    全局函数类内实现——直接在类内声明友元即可
    全局函数类外实现——需要提前让编译器知道全局函数的存在
*/

// 提前让编译器知道Person类的存在
template<typename T1, typename T2>
class Person;

// 全局函数，类外实现
template<typename T1, typename T2>
void printPerson2(Person<T1, T2> p){
    cout << "类外name = " << p.m_Name << ", 类外age = " << p.m_Age << endl;
}

template<class NameType, class AgeType=int>
class Person{
public:
    Person(NameType name, AgeType age){
        this->m_Name = name;
        this->m_Age = age;
    }

    // 全局函数，类内实现
    friend void printPerson(Person<NameType, AgeType> p){
        cout << "name = " << p.m_Name << ", age = " << p.m_Age << endl;
    }

    // 全局函数，类外实现
    // 加上空模板的参数列表
    // 如果全局函数是类外实现的话，需要让编译器提前知道这个函数的存在
    friend void printPerson2<>(Person<NameType, AgeType> p);

private:
    NameType m_Name;
    AgeType m_Age;
};



// 1. 全局函数在类内实现
void test01(){
    Person<string, int> p("Tom", 20);
    printPerson(p);
}

// 2. 全局函数在类外实现
void test02(){
    Person<string, int> p("Jetty", 30);
    printPerson2(p);
}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}