#include <iostream>
using namespace std;
#include <unistd.h>

/*
    多态是C++面向对象的三大特性之一
    多态分为两种：
        - 静态多态：函数重载和运算符重载属于静态多态，复用函数名
        - 动态多态：派生类和虚函数实现运行时多态
    静态多态和动态多态的区别：
        - 静态多态的函数地址早绑定——编译阶段确定函数地址
        - 动态多态的函数地址晚绑定——运行阶段确定函数地址
*/

class Animal{
public: 
    virtual void speak(){
        cout << "动物在说话" << endl;
    }
};

class Cat:public Animal{
public:
    void speak(){
        cout << "小猫在说话" << endl;
    }
};

class Dog:public Animal{
public:
    void speak(){
        cout << "小狗在说话" << endl;
    }
};

void doSpeak(Animal &animal){
    animal.speak();
}


void test01(){
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

void test02(){
    // Animal没有添加virtual关键字的时候，sizeof(Animal)=1
    // virtual关键字加上以后sizeof(Animal)=8(ubuntu 64位)/4(x86编译器)
    // 结果变成8字节的是编译成了x64
    cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}