#include <iostream>
using namespace std;
#include <unistd.h>
#include <deque>
#include <algorithm>
/*
    利用算法实现deque容器的排序
    算法：
        - sort(iterator beg, iterator end); 对beg到end区间内元素进行排序
*/

void printDeque(const deque<int> d){
    for (deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    printDeque(d);
    // sort算法默认排序规则是从小到大
    // 对于支持随机访问的迭代器的容器，都可以利用sort算法直接进行排序
    // vector也支持sort算法
    sort(d.begin(), d.end());
    printDeque(d);
}

int main(){
    test01();
    pause();
    return 0;
}