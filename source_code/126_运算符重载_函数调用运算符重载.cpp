#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

class Building;

class GoodGay{
public:
    GoodGay();
    void visit(); // 让visit函数可以访问Building中的私有成员
    void visit2(); // 让visit函数不可以访问Building中的私有成员
    Building *building;
};

class Building{
friend void GoodGay::visit(); //告诉编译器，GoodGay下的成员函数作为本类好朋友，可以访问本类的私有成员
public:
    Building();
public:
    string m_SittingRoom;
private:
    string m_BedRoom;
};

// 类外实现成员函数
Building::Building(){
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay(){
    building = new Building;
}

void GoodGay::visit(){
    cout << "visit正在访问：" << building->m_SittingRoom << endl;
    cout << "visit正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2(){
    cout << "visit2正在访问：" << building->m_SittingRoom << endl;
}

void test01(){
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

int main(){
    test01();
    pause();
    return 0;
}