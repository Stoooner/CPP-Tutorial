#include <iostream>
using namespace std;
#include <unistd.h>
#include <stack>

void test01(){
    // 特点: 先进后出
    stack<int> s;
    // 入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // 由于栈的特性，因此栈没有办法进行遍历，因为遍历是不改变容器中元素的，所以只有通过不断出栈的方式进行查看
    while(!s.empty()){
        // 查看栈顶元素
        cout << "栈顶的元素为： " << s.top() << endl;
        s.pop();
    }
    cout << "栈的大小： " << s.size() << endl;
}

int main(){
    test01();
    pause();
    return 0;
}