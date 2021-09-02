#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    模板的局限性：模板的通用性并不是万能的
    针对诸如自定义数据类型模板无法正常运行的情况，C++提供了模板的重载，可以为
    这些特定的类型提供具体话的模板
    学习模板并不是为了写模板，而是为了在STL(Standard Template Library)中能够运用系统提供的模板
*/

class Person{
public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    // 姓名
    string m_Name;
    // 年龄
    int m_Age;
};

// 对比两个数据是否相等的函数
template<typename T>
bool myCompare(T &a, T &b){
    if (a == b){
        return true;
    }else{
        return false;
    }
}

// 利用具体话的Person的版本实现代码，具体话会被优先调用
// 如果不加template<>则变成了普通函数优先调用
// 加上template<>使得这个函数变成了模板的重载版本
template<> bool myCompare(Person &p1, Person &p2){
    if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age){
        return true;
    }else{
        return false;
    }
}

void test01(){
    int a = 10;
    int b = 20;
    bool ret = myCompare(a, b);
    if (ret){
        cout << "a == b " << endl;
    }else{
        cout << "a != b " << endl;
    }
}

void test02(){
    Person p1("Tom", 10);
    Person p2("Tom", 10);
    bool ret = myCompare(p1, p2);
    if (ret){
        cout << "p1 == p2 " << endl;
    }else{
        cout << "p1 != p2 " << endl;
    }
}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}