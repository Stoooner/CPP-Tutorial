#include <iostream>
using namespace std;
#include <unistd.h>
#include <set>

/*
    set/multiset容器：所有元素都会在插入时自动被排序
        - 本质：set/multiset属于关联式容器，底层结构是用二叉树实现
        - 区别：set不允许容器中有重复的元素；multiset允许容器中有重复元素
    
    set容器构造函数和赋值函数
        - 构造：set<T> st; 默认构造函数
               set(const set &st); 拷贝构造函数
        - 赋值：set &operator=(const set &set); 重载等号操作符
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
    
    // 遍历容器
    // set容器的特点：插入元素自动排序，重复元素插不进去
    printSet(s1);

    set<int> s2(s1);
    printSet(s2);

    set<int> s3;
    s3 = s1;
    printSet(s3);
}

int main(){
    test01();
    pause();
    return 0;
}