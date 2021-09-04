#include <iostream>
using namespace std;
#include <unistd.h>
#include <set>
/*
    set容器大小以及交换set容器
        - size(); 返回容器中元素的数目
        - empty(); 判断容器是否为空
        - swap(st); 交换两个容器
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

    if(s1.empty()){
        cout << "s1为空" << endl;
    }else{
        cout << "s1的大小： " << s1.size() << endl;
    }

    set<int> s2;
    // set插入数据只有insert方法
    s2.insert(100);
    s2.insert(300);
    s2.insert(400);
    s2.insert(200);

    s1.swap(s2);
    printSet(s1);
    printSet(s2);
}

int main(){
    test01();
    pause();
    return 0;
}