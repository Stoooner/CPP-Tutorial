#include <iostream>
using namespace std;
#include <unistd.h>

/*
    常函数：
        - 成员函数后加const我们称这个函数为常函数
        - 常函数内不可以修改成员属性
        - 成员属性声明时加关键字mutable后，在常函数中依然可以进行修改
    
    常对象：
        - 声明对象前加const称该对象为常对象
        - 常对象只能调用常函数
*/

class Person{
public:
    Person(){
        
    }
    // this指针的本质是指针常量，也即指针的指向是不可以修改的
    // this指针就是指针常量，this指针等价于Person * const this，指向不可修改，指向的值可以修改;
    // 如果此时既不想修改指向又不想修改值，可以将其转换为const Person * const this, 
    // 它也就等价于const修饰成员函数，只不过这个const位置在成员函数后面，如下：
    // 在成员函数之后加const修饰的就是this指针，让指针指向的值也不可以修改了
    void showPersonAge() const{
        // m_A = 100; // <===> this->m_A = 100;
        this->m_B = 100;
    }
    int m_A;
    mutable int m_B; // 特殊变量，即使在常函数中，也可以修改这个值
};

void test01(){
    Person p;
    p.showPersonAge();
}

// 常对象
void test02(){
    const Person p; // 在对象前加上const变成常对象
    // p.m_A = 100;报错，说明这个对象的普通成员属性也是不可修改的
    p.m_B = 200; // 在常对象下可以修改
    // 常对象只能调用常函数, 不能调用普通的成员函数，因为普通的成员函数能够修改普通的变量
    p.showPersonAge();
}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}