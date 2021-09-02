#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>
/*
    多态使用时如果子类中有属性开辟在堆区，那么父类指针在释放时无法调用到子类中的析构函数
    解决方法：将父类中的析构函数改为虚析构或者纯虚析构；

    虚析构与纯虚析构的共性：
        - 可以解决父类指针释放子类对象；
        - 都需要有具体的函数实现；
    虚析构和纯虚析构的区别:
        如果是纯虚析构，该类属于抽象类，无法实例化对象
    
    虚析构语法：
    virtual ~类名(){};
    纯虚析构语法：
    virtual ~类名() = 0;
    类名::~类名(){};
    如果子类中没有堆区数据，可以不写虚析构或者纯虚析构
*/

class Animal{
public:
    Animal(){
        cout << "Animal的构造函数调用" << endl;
    }
    // 利用虚析构可以解决父类指针释放子类对象时不干净的问题
    // virtual ~Animal(){
    //     cout << "Animal的虚析构函数调用" << endl;
    // }
    // 纯虚析构需要声明，也需要实现，有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
    virtual ~Animal() = 0;
    virtual void speak() = 0;
};

Animal::~Animal(){
    cout << "Animal下的纯虚析构函数调用" << endl;
}

class Cat:public Animal{
public:
    Cat(string name){
        cout << "Cat的构造函数调用" << endl;
        m_Name = new string(name);
    }
    void speak(){
        cout << *m_Name <<"小猫在说话" << endl;
    }
    string *m_Name;
    ~Cat(){
        if (m_Name == NULL){
            // delete掉的是指针指向的堆区内存，指针自己没被delete
            // delete会把指针指向的这块内存的权限释放掉，让这块内存可以被其他进程使用
            cout << "Cat析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
    }
};

void test01(){
    Animal * animal = new Cat("Tom");
    animal->speak();
    // 父类的指针去析构的时候不会调用子类中的析构函数，导致子类如果有堆区属性，会出现内存的泄露情况
    delete animal;
}

int main(){
    test01();
    pause();
    return 0;
}