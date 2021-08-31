#include <iostream>
using namespace std;
#include <unistd.h>

/*
    C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
    如果用到this指针，需要加以判断保证代码的健壮性
*/

class Person{
public:
    void showClassName(){
        cout << "this is Person class." << endl;
    }
    void showPersonAge(){
        // 提高代码健壮性
        if (this==NULL){
            return;
        }
        // 对于下面这种调用属性的方式其实编译器默认都将其转换成了this->m_Age
        // 但是如果对象是一个空指针的话，此时this根本就没有指向一个确切的对象数据
        cout << "age = " << m_Age << endl;
    }
    int m_Age;
};

void test01(){
    Person *p = NULL;
    // p->showClassName();
    p->showPersonAge();
}

int main(){
    test01();
    pause();
    return 0;
}