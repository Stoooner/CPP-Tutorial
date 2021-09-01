#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    关系运算符重载的作用：可以让两个自定义类型数据进行对比操作
*/

class Person{
public:
    Person(string name, int age){
        m_Name = name;
        m_Age = age;
    }
    // 重载关系运算符
    bool operator==(Person &p){
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age){
            return true;
        }
        return false;
    }

    // 重载关系运算符
    bool operator!=(Person &p){
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age){
            return false;
        }
        return true;
    }

    string m_Name;
    int m_Age;
};

void test01(){
    Person p1("Tom", 18);
    Person p2("Tom", 19);
    // 运算符左边的对象可以调用运算符函数，必须在左边不能在右边
    // if (p1 == p2){
    //     cout << "p1 == p2" << endl;
    // }else{
    //     cout << "p1 != p2" << endl;
    // }

    if (p1 != p2){
        cout << "p1 != p2" << endl;
    }else{
        cout << "p1 == p2" << endl;
    }
}

int main(){
    test01();
    pause();
    return 0;
}