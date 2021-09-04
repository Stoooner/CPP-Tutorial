#include <iostream>
using namespace std;
#include <unistd.h>
#include <algorithm>
#include <vector>
#include <string>
/*
    将两个容器合并，并存储到另一个容器中
    merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest)
    // 注意: 两个容器必须得是有序的
    // dest 目标容器开始位置的迭代器
*/
void myprint(int val){
    cout << val << " ";
}

void test01(){
    vector<int> v1;
    vector<int> v2;
    for (int i=0;i<10;i++){
        v1.push_back(i);
        v2.push_back(i+1);
    }
    // 目标容器
    vector<int> v3;
    v3.resize(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for_each(v3.begin(), v3.end(), myprint);
    cout << endl;
}

int main(){
    test01();
    pause();
    return 0;
}