#include <iostream>
using namespace std;
#include <unistd.h>

/*
    当类模板碰到继承时，需要注意一个点：
        - 当子类继承的父类是一个类模板时，子类在声明的时候是需要指定出父类中T的类型的；
        - 如果不指定，编译器无法给子类分配内存；
        - 如果想灵活指定出父类中T的类型，子类也需要变为类模板
*/

template<class T>
class Base{
    T m;
};

// 下面是错误的例子：当子类继承的父类是一个类模板时，子类在声明的时候是需要指定出父类中T的类型的；
// class Son:public Base{

// };
class Son:public Base<int>{

};

// 如果想灵活指定出父类中T的类型，子类也需要变为类模板
template<class T1, class T2>
class Son2:public Base<T2>{
public:
    T1 obj;
};


void test01(){
    Son s1;
    Son2<int, char> s2;
}

int main(){
    test01();
    pause();
    return 0;
}