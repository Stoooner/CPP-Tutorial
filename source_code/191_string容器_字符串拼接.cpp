#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    string拼接的函数原型：
        - string& operator+=(const char* s); // 重载+=操作符
        - string& operator+=(const char c); // 重载+=操作符
        - string& operatoe+=(const string &s); // 重载+=操作符
        - string& append(const char* s); // 把字符串s连接到当前字符串结尾
        - string& append(const char* s, int n) // 把字符串s的前几个字符连接到当前字符串结尾
        - string& append(const string &s); // 同operatoe+=(const string &s)
        - string& append(const string &s, int pos, char c); // 字符串s中从pos开始的n个字符连接到字符串结尾
*/

void test01(){
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << "str1 = " << str1 << endl; 
    str1 += ':';
    cout << "str1 = " << str1 << endl; 
    string str2 = "LOL DNF";
    str1 += str2;
    cout << "str1 = " << str1 << endl;

    string str3 = "I";
    str3.append(" love ");
    cout << "str3 = " << str3 << endl;

    str3.append("game abcde", 7);
    cout << "str3 = " << str3 << endl;
    str3.append(str2);
    cout << "str3 = " << str3 << endl;
    str3.append(str2, 0, 3);
    cout << "str3 = " << str3 << endl;





}

int main(){
    test01();
    pause();
    return 0;
}