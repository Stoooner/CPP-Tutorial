#include <iostream>
using namespace std;

/*
    - 浅拷贝： 简单的赋值拷贝
    - 深拷贝： 在堆区重新申请空间，进行拷贝操作
    - 如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
*/

class Person{
public:
    Person(){
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(string name, int age, int height){
        m_name = name;
        m_age = age;
        m_height = new int(height);//将传入的身高数据new在堆区
        cout << "Person的有参构造函数调用" << endl;
    }
    
    // 自己实现一个拷贝构造函数来解决浅拷贝带来的问题
    Person(const Person &p){
        cout << "Person的拷贝构造函数调用" << endl;
        m_name = p.m_name;
        m_age = p.m_age;
        // m_height = p.m_height;//编译器默认实现拷贝构造函数的就是这行代码，从而造成了堆区重复释放
        // 深拷贝：指向不同的堆区
        m_height = new int(*p.m_height);
    }

    ~Person(){
        // 析构代码用于存放那些销毁存放在堆区的代码
        if (m_height != NULL){
            // 浅拷贝带来的问题就是堆区的数据会被重复释放
            delete m_height; // 释放m_height指向的堆区内存
            // 需要注意的是：释放一个指针(delete 指针名),并不会使该指针的值变为 NULL
            // https://www.cnblogs.com/carle-09/p/11554998.html
            // https://blog.csdn.net/qq_41071068/article/details/102791293
            // https://cloud.tencent.com/developer/article/1803993
            m_height = NULL; // 防止野指针出现, 所以在delete之后再置空一下
        }
        cout << "Person的默认析构函数调用" << endl;
    }
    string m_name;
    int m_age;
    int *m_height; // 身高
};

void test01(){
    Person p1("张三", 18, 168);
    cout << "p1的姓名： "<< p1.m_name << "，p1的年龄：" << p1.m_age << "，p1的身高："<< *p1.m_height << endl;
    Person p2(p1); // 使用编译器的默认拷贝构造函数会造成堆区空间重复释放，所以要重新写拷贝构造函数
    cout << "p2的姓名： "<< p2.m_name << "，p2的年龄：" << p2.m_age << "，p2的身高："<< *p2.m_height << endl;
}

int main(){
    test01();
    system("pause");
    return 0;
}