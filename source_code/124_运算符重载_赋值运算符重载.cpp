#include <iostream>
using namespace std;
#include <unistd.h>

/*
    C++编译器至少给一个类添加4个函数：
        - 1. 默认构造函数(无惨，函数体为空)
        - 2. 默认析构函数(无惨，函数体为空)
        - 3. 默认拷贝构造函数，对属性进行值拷贝
        - 4. 赋值运算符operator=, 对属性进行值拷贝
    如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题.
    需要注意的是浅拷贝(值拷贝)会将数据逐一全部拷贝
*/

class Person{
public:
    Person(int age){
        m_Age = new int(age);
    }
    ~Person(){
        if (m_Age != NULL){
            delete m_Age;
        }
        m_Age = NULL;
    }   

    // 重载赋值运算符
    Person & operator=(Person &p){
        // 编译器提供的是浅拷贝：m_Age = p.m_Age
        // 而为了避免因为浅拷贝带来的问题，需要先判断是否有属性在堆区，如果有则先释放干净，然后再深拷贝
        // 在这个例子中Person p2(20);就使得p2在堆区已经开辟了一块内存
        // ? 如果你直接覆盖，那么被覆盖的内存就无法复用了，浪费掉了？
        if (m_Age != NULL){
            delete m_Age;
            m_Age = NULL;
        }
        // 深拷贝
        m_Age = new int(*p.m_Age);
        // 返回对象自身
        return *this;
    }

    int *m_Age;
};

void test01(){
    Person p1(18);
    Person p2(20);
    Person p3(30);
    // 需要注意的是这里是重载赋值运算符而不是直接改拷贝构造函数是因为：
    // 1. 拷贝构造函数调用的时机是在初始化的时候，而这里p2=p1已经过了初始化阶段，所以p2=p1不会调用到拷贝构造函数
    // 所以这里只能通过赋值操作的方式去解决浅拷贝带来的堆区内存重复释放的问题
    p3 = p2 = p1; // 赋值操作，通过上面的重载赋值运算符解决浅拷贝问题
    cout << "p1.age = " << *p1.m_Age << endl;
    cout << "p2.age = " << *p2.m_Age << endl;
    cout << "p3.age = " << *p3.m_Age << endl;
}

int main(){
    test01();

    // int a = 10;
    // int b = 20;
    // int c = 30;
    // c = b = a;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    // cout << "c = " << c << endl;

    pause();
    return 0;
}