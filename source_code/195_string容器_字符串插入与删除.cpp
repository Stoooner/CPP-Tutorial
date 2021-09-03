#include <iostream>
using namespace std;
#include <unistd.h>
#include <string>
void test01(){
    string str1="hello";
    str1.insert(1, "xxx") ;// hxxxello
    str1.erase(6, 2); // hxxxxel
    cout << str1 << endl;
}

int main(){
    test01();
    pause();
    return 0;
}