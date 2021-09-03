#include <iostream>
using namespace std;
#include <unistd.h>
#include <deque>

void printDeque(const deque<int> d){
    for (deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    deque<int> d1;
    // 尾插
    d1.push_back(10);
    d1.push_back(20);
    // 头插
    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);
    // 尾删
    d1.pop_back();
    printDeque(d1);
    // 头删
    d1.pop_front();
    printDeque(d1);

    deque<int> d2;
    // 尾插
    d2.push_back(10);
    d2.push_back(20);
    // 头插
    d2.push_front(100);
    d2.push_front(200);
    printDeque(d2);
    // insert
    d2.insert(d2.begin()+2, 6666);
    printDeque(d2);
    d2.insert(d2.begin()+2, 2, 333);
    printDeque(d2);
    // 在pos=d2.begin()+1位置，插入d1中[d1.begin(), d1.begin()+1)之间的元素
    d2.insert(d2.begin()+1, d1.begin(), d1.begin()+1);
    printDeque(d2);

    // 删除
    deque<int>::iterator it = d2.begin();
    d2.erase(it+2);
    printDeque(d2);
    d2.erase(it, it+d2.size()-1);
    printDeque(d2);
    d2.clear();
    printDeque(d2);
}

int main(){
    test01();
    pause();
    return 0;
}