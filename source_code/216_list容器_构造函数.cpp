#include <iostream>
using namespace std;
#include <unistd.h>
#include <list>
/*
    list容器构造函数：
        - list<T> lst; list采用模板类实现，对象的默认构造函数形式；
        - list(beg, end); 构造函数将[beg, end)区间中的元素拷贝给本身
        - list(n, elem); 构造函数将n个elem拷贝给本身
        - list(const list &lst); 拷贝构造函数
*/

void printList(const list<int> &L){
    for (list<int>::const_iterator it=L.begin();it!=L.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    list<int> l1; // 默认构造
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);

    // 区间方式进行构造
    list<int> l2(l1.begin(), l1.end());
    printList(l2);

    // 拷贝构造
    list<int> l3(l2);
    printList(l3);

    // n个elem
    list<int> l4(10, 666);
    printList(l4);
}

int main(){
    test01();
    pause();
    return 0;
}