#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>
#include <algorithm>

/*
    set_union
        - 求两个容器的交集
        - set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator beg3)
*/

void myprint(int val){
    cout << val << " ";
}

void test01(){
    vector<int> v1;
    vector<int> v2;
    for (int i=0;i<10;i++){
        v1.push_back(i);
        v2.push_back(i+5);
    } 
    vector<int> vtarget;
    // 目标容器需要提前开辟空间
    // 在取交集情况下，目标容器空间开辟大小为两个源容器中最小的
    vtarget.resize(v1.size()+v2.size());
    // 获取交集
    vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
    // 需要注意的是这里传入到for_each的不能是vtarget.end()，而得是itEnd
    // 因为vtarget.end()是这个容器开辟出来的大小情况下最末尾的位置
    // 但是交集的数据可能占不满整个vtarget的空间
    // 因此才必须使用itEnd指定交集的末尾，而不是vtarget的末尾
    for_each(vtarget.begin(), itEnd, myprint);
    cout << endl;
}

int main(){
    test01();
    pause();
    return 0;
} 