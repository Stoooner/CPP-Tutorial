#include <iostream>
using namespace std;
#include <unistd.h>

/*
    字符串比较是按照字符的ASCII值进行的比较
    = 返回0
    > 返回1
    < 返回-1
    函数原型：
        - int compare(const string &s) const; //与字符串s比较
        - int compare(const char* s) const; //与字符串s比较
*/

void test01(){
    // compare只比较从左到右开始的第一个不同的字母大小，第一个不同的字母比较完了就返回结果
    string str1 = "xello";
    string str2 = "hello";
    if (str1.compare(str2) == 0){
        cout << "str1 == str2" << endl;
    }else if (str1.compare(str2) > 0){
        cout << "str1 > str2" << endl;
    }
}

int main(){
    test01();
    pause();
    return 0;
}