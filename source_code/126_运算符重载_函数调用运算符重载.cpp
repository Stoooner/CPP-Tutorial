#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    - 函数调用运算符()也是可以重载的；
    - 由于重载后使用的方式非常像函数的调用，因此称为仿函数
    - 仿函数没有固定写法，非常灵活
*/
 
// 打印输出类
class MyPrint{
public:
    // 重载函数调用运算符
    void operator()(string test){
        cout << test << endl;
    }
};

// 仿函数非常灵活，没有固定的写法，
class MyAdd{
public:
    int operator()(int num1, int num2){
        return num1 + num2;
    }
};

void test01(){
    MyPrint myprint;
    // 由于使用起来非常像函数调用，因此称为仿函数
    myprint("Hello World");
}

void test02(){
    MyAdd myadd;
    cout << "result = " << myadd(1, 2) << endl;
    // 匿名函数对象
    cout << "result2 = " << MyAdd()(10, 2) << endl;
}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}