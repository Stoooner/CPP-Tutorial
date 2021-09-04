#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    pair对组创建: 成对出现的数据，利用对组可以返回两个数据
    创建方式：
        - pair<type, type> p(value1, value2);
        - pair<type, type> p = make_pair(value1, value2);
*/

void test01(){
    // 第一种方式
    pair<string, int> p1("Tom", 20);
    cout << "姓名 = " << p1.first << ", 年龄 = " << p1.second << endl;

    // 第二种数组
    pair<string, int> p2 = make_pair("jerry", 30);
    cout << "姓名 = " << p2.first << ", 年龄 = " << p2.second << endl;
}

int main(){
    test01();
    pause();
    return 0;
}