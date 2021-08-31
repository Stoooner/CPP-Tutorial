#include <iostream>
using namespace std;
#include <unistd.h>

/*
    在C++中，类内的成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上
*/

class Person{
    int m_A; // 非静态的成员变量，属于类的对象上的，所以test02例子中对象占用的内存为4
    static int m_B; // 静态成员变量，不属于某个类的对象上，所以所以test02例子中对象占用的内存依旧为4
    // 非静态成员函数，test02例子中对象占用的内存依旧为4，这说明成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上
    // 非静态成员函数本质也只有一份，只是内部通过某种方式能够区分不同的调用它的对象，它不属于某个对象
    void func(){

    }

    static void func2(){} // 更不属于某个对象了，不属于类的对象上
};

int Person::m_B = 0;
 
void test01(){
    Person p;
    // 当只是单纯的定义了一个类，这个类里什么都没有时，此时定义的对应就是一个空对象
    // 空对象占用的内存空间为1
    // 这是因为c++编译器会给每个空对象也分配一个字节的空间是为了区分如果有不同的空对象被创建的话，那么它们各自占据在内存的位置实在哪里
    // 每个空对象都有一个独一无二的内存地址
    cout << "sizeof p = " << sizeof(p) << endl;
}

void test02(){
    Person p;
    cout << "sizeof p = " << sizeof(p) << endl;
}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}