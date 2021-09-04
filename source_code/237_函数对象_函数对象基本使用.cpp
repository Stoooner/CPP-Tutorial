#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>
/*
    函数对象:
        概念：- 重载函数调用操作符()的类，其对象常被称为函数对象
             - 函数对象使用重载的()时，行为类似函数调用，因此也叫仿函数
        本质： 函数对象(仿函数)是一个类，不是一个函数，只是调用起来类似函数调用
        
    函数对象使用：
        特点：- 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
             - 函数对象超出了普通函数的概念，函数对象可以有自己的状态
             - 函数对象可以作为参数传递
        个人理解：在一个类中重载函数调用符()才能叫仿函数，在类外重载则不是
*/

// 1. 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
class myAdd{
public:
    int operator()(int v1, int v2){
        return v1 + v2;
    }
};

// 2. 函数对象超出了普通函数的概念，函数对象可以有自己的状态
class myPrint{
public:
    myPrint(){
        this->m_cout = 0;
    }
    int m_cout;
    void operator()(string text){
        cout << text << endl;
        this->m_cout++;
    }
};

void doPrint(myPrint &mp, string text){
    mp(text);
}

void test01(){
    myAdd myadd;
    cout << myadd(10, 20) << endl;

    myPrint myp;
    myp("hello world");
    myp("hello world");
    myp("hello world");
    myp("hello world");
    cout << "myprint调用的次数：" << myp.m_cout << endl;

    doPrint(myp, "hello c++");
}

int main(){
    test01();
    pause();
    return 0;
}