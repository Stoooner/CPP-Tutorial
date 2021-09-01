#include <iostream>
using namespace std;
#include <unistd.h>

/*
    继承方式：
        - 公共继承
        - 保护继承
        - 私有继承
*/

// 公共继承
class Base1{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son:public Base1{
public:
    void func(){
        m_A = 10; // 父类中的公共权限成员到子类中依然是公共权限
        m_B = 10; // 父类中的保护权限成员到子类中依然是保护权限
        // m_C = 10; // 父类中的私有权限成员子类访问不到
    }
};

void test01(){
    Son s1;
    s1.m_A = 200;
    // s1.m_B = 200; // 在Son中m_B是保护权限，所以类外访问不到
}

int main(){
    test01();
    pause();
    return 0;
}