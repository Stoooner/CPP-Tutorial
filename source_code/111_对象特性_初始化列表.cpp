#include <iostream>
using namespace std;

/*
    C++提供了初始化列表语法，用来初始化属性
    语法： 构造函数(): 属性1(值1), 属性2(值2) ... {}
*/

class Person{
public:
    // 传统初始化操作
    // Person(int a, int b, int c){
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }

    // 初始化列表的方式初始化属性
    // Person():m_A(10), m_B(11), m_C(12){

    // }
    // 或者：(这种初始化方式效率更高？)
    // 这种方法可以用在类嵌套中直接对类中类进行赋值，只需要调用一次函数实现多个类不同属性初始化
    // 真正的初始化发生在构造函数语句之前，也即初始化列表处，所有传统的方法需要一次初始化和一次拷贝(等号赋值)的开销，对于大的对象成员这种开销会影响程序性能
    Person(int a, int b, int c):m_A(a), m_B(b), m_C(c){

    }

    int m_A;
    int m_B;
    int m_C;
};

void test01(){
    // Person p(10, 20, 30);//传统的有参构造的初始化方式
    // Person p; // 初始化列表的方式进行初始化
    Person p(11, 15, 13);
    cout << "m_A = " << p.m_A << ", m_B = " << p.m_B << ", m_C = " << p.m_C << endl;
}

int main(){
    test01();
    system("pause");
    return 0;
}