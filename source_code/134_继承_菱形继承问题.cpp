#include <iostream>
using namespace std;
#include <unistd.h>

/*
    菱形继承概念：
        - 两个派生类继承同一个基类
        - 又有某个类同时继承了这个两个派生类
        - 这种继承被称为菱形继承或者钻石继承
*/

// 动物类
class Animal{
public:
    int m_Age;
};

// 利用虚继承可以解决菱形继承的问题(virtual)
// 此时最上层的基类Animal称为虚基类，利用虚继承使得继承自多个父类的那个同名对象只有一个了
// 羊类
class Sheep:virtual public Animal{

};

// 驼类
class Tuo:virtual public Animal{

};

// 羊驼类
// 虚继承情况下，最底层的子类最后继承自谁，那么前面继承的一大串同名属性最后就只保留谁的
class SheepTuo:public Sheep, public Tuo{

};

void test01(){
    SheepTuo st;
    // st.m_Age = 18; 这样去写会存在不明确问题，因为从两个父类都继承了同一个属性
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;
    // 当出现菱形继承时，从多个父类继承同一个属性时，需要加以作用域进行区分
    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
    // 利用虚继承之后，现在也可以直接用下面的方式访问同名属性
    cout << "st.m_Age = " << st.m_Age << endl;

    // 菱形数据导致了同一个属性数据存在两份，导致资源浪费

}


int main(){
    test01();
    pause();
    return 0;
}