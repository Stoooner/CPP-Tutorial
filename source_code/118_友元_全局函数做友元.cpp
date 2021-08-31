#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    在程序中有些私有属性也想要类外特殊的一些函数或者类进行访问，就需要用到友元的技术，
    友元的目的就是让一个函数或者类访问另一个类中的私有成员，友元的关键字是friend，
    友元的三种实现：
        - 全局函数做友元
        - 类做友元
        - 成员函数做友元
*/

class Building{
    // goodGay是Building这个类的好朋友，可以访问这个类中的私有成员
    friend void goodGay(Building &Building);
public:
    Building(){
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
public:
    string m_SittingRoom; // 客厅
private:
    string m_BedRoom;
};

// 全局函数
void goodGay(Building &Building){
    cout << "正在访问：" << Building.m_SittingRoom << endl;
    cout << "正在访问：" << Building.m_BedRoom << endl;
}

void test01(){
    Building building;
    goodGay(building);
}

int main(){
    test01();
    pause();
    return 0;
}