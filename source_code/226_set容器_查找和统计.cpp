#include <iostream>
using namespace std;
#include <unistd.h>
#include <set>
/*
    对set容器进行查找数据和统计数量
        - find(key); 查找key是否存在，若存在则返回该键的元素的迭代器，若不存在则返回set.end();
        - count(key); 统计key的元素个数
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

    // 查找
    set<int>::iterator pos = s1.find(30);
    // 如果key没找到才返回s.end()，所以只要这个迭代器不等于end()则说明找到了
    if (pos != s1.end()){
        cout << "找到了这个元素: " << *pos << endl;
    }

    // 统计
    // 对于set而言，统计的结果要么是零，要么是一
    cout << "统计元素的个数： " << s1.count(300) << endl;
}

int main(){
    test01();
    pause();
    return 0;
}