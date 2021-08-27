#include <iostream>
using namespace std;
#include <unistd.h>
// C++类中的成员可以是另一个类的对象，我们称该成员为对象成员
/* 
    class A{};
    class B{
        A a; // 对象成员
    };

*/
class Phone{
public:
    Phone(string pName){
        m_PName = pName;
        cout << "Phone的有参构造调用" << endl;
    }
    string m_PName; // 手机品牌名称
    ~Phone(){
        cout << "Phone的析构函数调用" << endl;
    }
};

class Person{
public:
    // m_Phone(pName)其实就是Phone m_Phone = pName;而这个就是隐式转换法，实际也就对应的显示法为：Phone m_Phone = Phone(pName)
    Person(string name, string pName):m_Name(name), m_Phone(pName){
        cout << "Person的初始化列表构造调用" << endl;
    }
    string m_Name;
    Phone m_Phone; // 当有其他类的对象的时候，在构造本类的对象的时候会先构造其他类的对象, 析构的顺序与构造相反
    ~Person(){
        cout << "Person的析构函数调用" << endl;
    }
};

void test01(){
    Person p("张三", "iphone");
    cout << p.m_Name << "拿着" << p.m_Phone.m_PName << "品牌的手机." << endl;
}

int main(){
    test01();
    // system("pause");
    pause();
    return 0;
}