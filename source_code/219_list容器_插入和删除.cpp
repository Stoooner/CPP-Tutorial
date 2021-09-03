#include <iostream>
using namespace std;
#include <unistd.h>
#include <list>

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
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    printList(l1);

    l1.pop_back();
    l1.pop_front();
    printList(l1);

    list<int>::iterator it = l1.begin();
    // 因为list这种链表的性质使得其只能使用自增++的操作进行迭代器的改变，不能向其他随机迭代器那样可以+n
    // 而且只能使用++，不能使用+1，因为对于连续空间的数据集合可以+1(也即对地址进行加减)，但是非连续数据集合只能++(重载++，是对地址的跳跃)
    l1.insert(++it, 66666);
    printList(l1);

    // 删除
    it = l1.begin();
    l1.erase(it);
    printList(l1);

    // 移除remove函数会对传入的值在容器中全部删除
    l1.remove(66666);
    printList(l1);

    l1.clear();
    printList(l1);
}

int main(){
    test01();
    pause();
    return 0;
}