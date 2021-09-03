#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    从字符串中获取想要的子串
    string substr(int pos = 0, int n = npos) const; // 返回由pos开始的n个字符组成的字符串
*/

void test01(){
    string str1 = "abcdefg";
    string subStr = str1.substr(1, 3);
    cout << subStr << endl;

    string email = "zhangsan@sina.com";
    int pos = email.find("@");
    string userName = email.substr(0, pos);
    cout << userName << endl;
}

int main(){
    test01();
    pause();
    return 0;
}