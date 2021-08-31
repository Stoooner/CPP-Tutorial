#include <iostream>
using namespace std;
/*
    默认情况下，C++编译器至少给一个类添加三个函数：
        - 默认构造函数(无参，函数体为空)；
        - 默认析构函数(无参，函数体为空)；
        - 默认拷贝构造函数，对属性进行值拷贝；
    
    构造函数调用规则如下：
        - 如果用户定义有参构造函数，则C++不再提供默认无参构造，但是会提供默认拷贝构造；
        - 如果用户定义拷贝构造函数，则C++不会提供其他构造函数
*/

class Person{
public:
    Person(){
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(string name, int age){
        m_name = name;
        m_age = age;
        cout << "Person的有参构造函数调用" << endl;
    }

    // 拷贝构造函数被注释掉之后，使用括号法传入一个对象之后依旧能够调用系统默认提供的拷贝构造函数，只不过没有了cout输出信息
    Person(const Person &p){
        m_name = p.m_name;
        m_age = p.m_age;
        cout << "Person的拷贝构造函数调用" << endl;
    }
    
    ~Person(){
        cout << "Person的默认析构函数调用" << endl;
    }
    string m_name;
    int m_age;
};

void test01(){
    Person p;
    p.m_age = 18;
    p.m_name = "张三";
    Person p2(p);
    cout << "p2的名字：" << p2.m_name << ", p2的年龄：" << p2.m_age << endl;
}

void test02(){
    Person p;
}

int main(){
    // test01();
    test02();
    system("pause");
    return 0;
}