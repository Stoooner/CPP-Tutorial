#include <iostream>
using namespace std;
#include <unistd.h>
#include <list>
/*
    list赋值与交换：
        - assign(beg, end); 将[beg, end)区间中的数据拷贝赋值给本身
        - assign(n, elem); 将n个elem拷贝赋值给本身
        - list& operator=(const list &list); 重载等号操作符
        - swap(lst); 将lst与本身的元素互换
*/

void printList(const list<int> &L){
    for (list<int>::const_iterator it=L.begin();it!=L.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);
    
    list<int> l2;
    l2 = l1;
    printList(l2);

    list<int> l3;
    l3.assign(l2.begin(), l2.end());
    printList(l3);

    list<int> l4;
    l4.assign(5, 666);
    printList(l4);

    cout << "---------------" << endl;
    l4.swap(l1); // 交换前后的两个容器的大小可以不一致
    printList(l4);
    printList(l1);
}

int main(){
    test01();
    pause();
    return 0;
}