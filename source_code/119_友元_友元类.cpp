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
    // 全局函数goodGay是Building这个类的好朋友，可以访问这个类中的私有成员
    friend void goodGay(Building &Building);
    friend class GoodGay;
public:
    Building();
    // Building(){
    //     m_SittingRoom = "客厅";
    //     m_BedRoom = "卧室";
    // }
public:
    string m_SittingRoom; // 客厅
private:
    string m_BedRoom;
};

class GoodGay{
public:
    Building * building;
    GoodGay(){
        building = new Building;
    }
    void visit(); // 参观函数，访问building中的属性
};

// 类外实现成员函数
Building::Building(){
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

void GoodGay::visit(){
    cout << "好基友正在访问: " << building->m_SittingRoom << endl;
    cout << "好基友正在访问: " << building->m_BedRoom << endl;
}

// 全局函数
void goodGay(Building &Building){
    cout << "正在访问：" << Building.m_SittingRoom << endl;
    cout << "正在访问：" << Building.m_BedRoom << endl;
}

void test01(){
    Building building;
    goodGay(building);
}

void test02(){
    GoodGay gg;
    gg.visit();
}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}