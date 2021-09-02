#include <iostream>
using namespace std;
#include <unistd.h>

/*
    类模板实例化出来的对象，向函数传参的方式
    一共有三种传入方式：
        1. 指定传入的类型 --> 直接显示对象的数据类型
        2. 参数模板化 --> 将对象中的参数变为模板进行传递
        3. 整个类模板化 --> 将这个对象类型 模板化进行传递
*/

template<class T1, class T2>
class Person{
public:
    Person(T1 name, T2 age){
        this->m_Name = name;
        this->m_Age = age;
    }

    void showPerson(){
        cout << "姓名 = " << this->m_Name << ", 年龄 = " << this->m_Age << endl;
    }

    T1 m_Name;
    T2 m_Age;

};

// 1. 指定传入的类型 --> 直接显示对象的数据类型
void printPerson1(Person<string, int> &p){
    p.showPerson();
}

void test01(){
    Person<string, int> p("张三", 100);
    printPerson1(p);
}

// 2. 参数模板化 --> 将对象中的参数变为模板进行传递
template<typename T1, typename T2>
void printPerson2(Person<T1, T2> &p){
    p.showPerson();
    cout << "编译器推导出的T1的类型为： " << typeid(T1).name() << endl;
    cout << "编译器推导出的T2的类型为： " << typeid(T2).name() << endl;
}

void test02(){
    Person<string, int> p("李四", 100);
    printPerson2(p);
}

// 3. 整个类模板化 --> 将这个对象类型 模板化进行传递
template<typename T>
void printPerson3(T &p){
    p.showPerson();
    cout << "编译器推导出的T的类型为： " << typeid(T).name() << endl;
}

void test03(){
    Person<string, int> p("王五", 300);
    printPerson3(p);
}

int main(){
    // test01();
    // test02();
    test03();
    pause();
    return 0;
}