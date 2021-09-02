#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    掌握类模板中成员函数的类外实现
*/

template<class NameType, class AgeType=int>
class Person{
public:
    Person(NameType name, AgeType age);

    void showPerson();

    NameType m_Name;
    AgeType m_Age;
};

// 类模板的构造函数的类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age){
    this->m_Name = name;
    this->m_Age = age;
}

// 类模板的成员函数的类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson(){
    cout << "name = " << this->m_Name << ", age = " << this->m_Age << endl;
}

void test01(){
    Person<string, int> p("Tom", 20);
    p.showPerson();
}

int main(){
    test01();
    pause();
    return 0;
}