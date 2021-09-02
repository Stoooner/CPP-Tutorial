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
    // 虚函数：virtual关键字添加在函数前面
    // 动态多态需要满足的条件是：
    // 1. 有继承关系；
    // 2. 子类需要重写父类的虚函数
    // 3. 需要注意的是重写和重载不同，重写指的是函数名、返回值类型、形参列表中的所有内容要相同，另外重载需要在同一作用域，而多态中的重写不在同一作用域
    // 4. 多态中子类在重写父类的虚函数的时候，关键字virtual可写可不写
    // 动态多态的调用
    // 1. 父类的指针或者引用指向子类对象
    virtual void speak(){
        cout << "动物在说话" << endl;
    }
};

class Cat:public Animal{
public:
    // 子类重新实现父类中同名函数之后，由于父类中的那个同名函数添加了virtual关键字变成虚函数了
    // 此时就实现了地址晚绑定了
    void speak(){
        cout << "小猫在说话" << endl;
    }
};

class Dog:public Animal{
public:
    // 子类重新实现父类中同名函数之后，由于父类中的那个同名函数添加了virtual关键字变成虚函数了
    // 此时就实现了地址晚绑定了
    void speak(){
        cout << "小狗在说话" << endl;
    }
};

// C++中运行父子之间的类型转换，子类可以转换为父类，父类不能转换为子类
// 这种属于是地址早绑定，在编译阶段就确定了函数的地址
// 如果想要猫说话，那么函数的地址就不能提前绑定，需要在运行阶段进行绑定，也即地址晚绑定
// 利用虚函数实现地址晚绑定之后，通过传入不同对象时的对象类型再确定调用什么函数
void doSpeak(Animal &animal){ // Animal &animal = cat;
    animal.speak();
}

void test01(){
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

int main(){
    test01();
    pause();
    return 0;
}