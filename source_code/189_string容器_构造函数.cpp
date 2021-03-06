#include <iostream>
using namespace std;
#include <unistd.h>

/*
    1. string基本概念
        本质：string是C++风格的字符串，而string本质上是一个类
        string和char *的区别：
            - char *是一个指针；
            - string是一个类，类内部封装了char *，管理这个字符串，是char *型的容器
        特点：
            - string类内部封装了很多成员方法
            - 例如：查找find，拷贝copy，删除delete，替换replace，插入insert
            - string管理char *所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责
    2. string构造函数
        构造函数原型：
            - string() 无参构造，创建一个空的字符串，例如 string str;
            - string(const char* s) 有参构造，使用字符串s进行初始化
            - string(const string &str) 拷贝构造，使用一个string对象初始化另一个string对象
            - string(int n, char c) 有参构造，使用n个字符c初始化
*/

void test01(){
    string s1; // 默认构造

    // 有const是因为"hello world"是字符串，常量不可修改
    const char* str = "hello world";
    string s2(str);
    cout << "s2 = " << s2 << endl;

    string s3(s2);
    cout << "s3 = " << s3 << endl;

    string s4(10, 'a');
    cout << "s4 = " << s4 << endl;
}

int main(){
    test01();
    pause();
    return 0;
}