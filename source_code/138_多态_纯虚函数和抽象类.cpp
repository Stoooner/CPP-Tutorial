#include <iostream>
using namespace std;
#include <unistd.h>

/*
    在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
    因此可以将虚函数改为纯虚函数，纯虚函数语法virtual 返回值类型 函数名 (参数列表)=0;
    当类中有了纯虚函数的时候，这个类也被称为抽象类
    
    需要注意的是： 
        - 抽象类无法实例化对象；
        - 子类必须重写抽象类中的纯虚函数，否则也属于抽象类；
*/

class Base{
public:
    // 这个就是纯虚函数，这个类称为抽象函数
    virtual void func() = 0;
};

class Son:public Base{
public:
    void func(){
        cout << "Son中func函数的调用" << endl;
    }
};

void test01(){
    // 多态调用法
    Base * base = new Son;
    base->func();
    delete base;
}

int main(){
    test01();
    pause();
    return 0;
}