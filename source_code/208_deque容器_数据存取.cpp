#include <iostream>
using namespace std;
#include <unistd.h>
#include <deque>

/*
    函数原型：
        - at(int index); 返回索引为index的元素
        - operator[index]; 返回索引为index的元素
        - front(); 返回容器中第一个元素
        - back(); 返回容器中最后一个数据元素
*/

void test01(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);

    // 通过[]或者at方式访问元素
    for (int i=0;i<d.size();i++){
        // cout << d[i] << " ";
        cout << d.at(i) << " ";
    }
    cout << endl;
    cout << "deque第一个元素： " << d.front() << endl;
    cout << "deque最后一个元素： " << d.back() << endl;
}

int main(){
    test01();
    pause();
    return 0;
}