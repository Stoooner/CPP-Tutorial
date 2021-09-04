#include <iostream>
using namespace std;
#include <unistd.h>
#include <algorithm>
#include <vector>
/*
    transform将一个容器的数据搬运到另一个容器
    transform(iterator beg1, iterator end1, iterator beg2, _func);
        - beg1: 源容器开始的迭代器
        - end1: 源容器结束的迭代器
        - beg2: 目标容器开始迭代器
        - _func：函数或者函数对象
*/

class Transform{
public:
    int operator()(int v){
        return v;
    }
};

class myprint{
public:
    void operator()(int val){
        cout << val << " ";
    }
};

void test01(){
    vector<int> v;
    for (int i=0;i<10;i++){
        v.push_back(i);
    }
    vector<int> v2;
    v2.resize(v.size());
    transform(v.begin(), v.end(), v2.begin(), Transform());
    for_each(v2.begin(), v2.end(), myprint());
    cout << endl;
}

int main(){
    test01();
    pause();
    return 0;
}