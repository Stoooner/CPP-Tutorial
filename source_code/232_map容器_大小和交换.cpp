#include <iostream>
using namespace std;
#include <unistd.h>
#include <map>
/*
    统计map容器大小以及交换map容器
        - size(); 返回容器中元素的数目；
        - empty(); 判断容器是否为空；
        - swap(st); 交换两个集合容器
*/

void test01(){
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 10));
    cout << m1.empty() << endl;
    cout << m1.size() << endl;

    map<int, int> m2;
    m2.insert(pair<int, int>(2, 20));
    m2.swap(m1);
}

int main(){
    test01();
    pause();
    return 0;
}