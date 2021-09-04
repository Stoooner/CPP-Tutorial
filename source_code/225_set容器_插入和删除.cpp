#include <iostream>
using namespace std;
#include <unistd.h>
#include <set>

/*
    set容器插入和删除操作
        - insert(elem); 在容器中插入元素
        - clear(); 清空容器
        - erase(pos); 删除pos位置的迭代器所指向的元素，返回下一个元素的迭代器
        - erase(beg, end); 删除区间[beg, end)之间的所有元素，返回下一个元素的迭代器
        - erase(elem); 删除容器中值为elem的值 
*/

void printSet(set<int> &s){
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    set<int> s1;
    // set插入数据只有insert方法
    s1.insert(10);
    s1.insert(30);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(30);
    printSet(s1);

    //删除
    // 需要注意的是set/multiset的迭代器是双向迭代器，不是随机迭代器，因此只支持迭代器位置的++/--，不支持+n/-n
    s1.erase(++s1.begin()); 
    printSet(s1);

    s1.erase(30);
    printSet(s1);

    s1.clear();
    printSet(s1);
}

int main(){
    test01();
    pause();
    return 0;
}