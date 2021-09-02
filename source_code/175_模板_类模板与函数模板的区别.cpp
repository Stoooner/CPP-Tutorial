#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    类模板和函数模板区别主要有两点：
        - 类模板没有自动类型推导的使用方式；
        - 类模板在模板参数列表中可以有默认参数；
*/

template<class NameType, class AgeType=int>
class Person{
public:
    Person(NameType name, AgeType age){
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson(){
        cout << "name = " << this->m_Name << endl;
        cout << "age = " << this->m_Age << endl;
    }

    NameType m_Name;
    AgeType m_Age;
};

void test01(){
    // Person p("张三", 1000); 无法使用自动类型推导，只能用显示指定类型
    Person<string, int> p1("张三", 1000);
    Person<string> p2("李四", 500);

}

int main(){
    test01();
    pause();
    return 0;
}