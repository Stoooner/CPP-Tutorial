#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>

/*
    string单个字符存取的方式：
        - char& operator[](int n); //通过[]的方式取字符
        - char& at(int n); // 通过at的方法获取字符

*/

void test01(){
    string str1 = "hello";
    // 通过[]的方式取字符
    for (int i=0; i<str1.size(); i++){
        cout << str1[i] << endl;
    }

    for (int i=0; i<str1.size(); i++){
        cout << str1.at(i) << endl;
    }

    // 修改单个字符
    str1[0] = 'x';
    str1.at(1) = 'y';
}

int main(){
    test01();
    pause();
    return 0;
}