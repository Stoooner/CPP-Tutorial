#include <iostream>
using namespace std;
#include <unistd.h>

/*
    在C++中成员变量和成员函数是分开存储的，每一个非静态成员函数只会诞生一份函数实例，也就是说：
    多个同类型的对象会共用一份代码。而C++通过提供特殊的对象指针——this指针解决了共用的这份代码如何区分不同对象的问题，
    this指针指向被调用的成员函数所属的对象

    this指针是隐含在每个非静态成员函数内的一种指针，this指针不需要定义，直接使用即可
    this指针的用途：
        - 当形参和成员变量同名时，可用this指针来进行区分；
        - 在类的非静态成员函数中返回对象本身，可使用return *this
        - this指针指向的就是对象，通过*this解引用可以访问该对象本身
*/

class Person{
public:
    Person(int age){
        // this指针指向被调用的成员函数所属的对象
        this->age = age;
    }

    // 这里必须要以引用的方式进行返回，不然的话返回的就不是p2这个对象了，而是别的Person对象，那么后续加年龄的操作就与p2无关了
    Person& PersonaddPerson(const Person &p){
        this->age += p.age;
        // this是指向p2的指针，*this指向的就是p2这个对象本体
        return *this;
    }

    int age;
};

void test01(){
    Person p1(18);
    cout << p1.age << endl;
}

void test02(){
    Person p1(10);
    Person p2(10);
    // 链式编程思想
    p2.PersonaddPerson(p1).PersonaddPerson(p1).PersonaddPerson(p1);
    cout << p2.age << endl;
}

int main(){
    test02();
    pause();
    return 0;
}