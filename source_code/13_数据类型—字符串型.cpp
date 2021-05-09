#include <iostream>
using namespace std;
#include <string>

int main(){
    /* 
        1. C语言风格字符串: char 变量名[] = "字符串值"
        2. C++风格字符串: string 变量名 = "字符串值"
    */

    // 1. C风格(中括号 + 双引号)：
    char str[] = "hello world";
    cout << str << endl;
    // 2. C++风格字符串(需要包含<string>头文件)
    string str2 = "hell";
    cout << str2 << endl;

    system("pause");
    return 0;
}

