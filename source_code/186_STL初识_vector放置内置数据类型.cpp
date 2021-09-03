#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>
#include <algorithm> // 标准算法头文件

/*
    容器：vector
    算法：for_each
    迭代器：vector<int>::iterator
*/

// 也即for_each这个算法的回调函数
// 在for_each调用期间再不断的进行调用
void myPrint(int val){
    cout << val << endl;
}

void test01(){
    // 创建一个vector容器，数组
    vector<int> v;
    // 向容器中插入数据(尾部插入数据)
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // // 1. 第一种遍历vetor容器的方式
    // // 通过迭代器访问容器中的数据
    // // v.begin()是一个起始迭代器，它指向容器中的第一个元素，将这个起始迭代器赋值给迭代器对象itBegin
    // vector<int>::iterator itBegin = v.begin();
    // vector<int>::iterator itEnd = v.end(); // v.end()结束迭代器，它指向容器中最后一个元素的下一个位置
    // while(itBegin != itEnd){
    //     // cout << *itBegin << endl;
    //     // itBegin++;

    //     cout << *(itBegin++) << endl;
    // }

    // 2. 第二种遍历方式
    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout << *it << endl;
    // }

    // 3. 第三种便利方式：利用STL中提供的便利算法
    for_each(v.begin(), v.end(), myPrint);
}

int main(){
    test01();
    pause();
    return 0;
}