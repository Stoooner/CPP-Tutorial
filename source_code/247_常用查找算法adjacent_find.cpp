#include <iostream>
using namespace std;
#include <unistd.h>
#include <algorithm>
#include <vector>
#include <string>
/*
    adjacent_find(iterator beg, iterator end);
    // 查找相邻重复元素，返回相邻元素的第一个位置的迭代器
*/

void test01(){
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(2);
    v1.push_back(0);
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(3);
    vector<int>::iterator it = adjacent_find(v1.begin(), v1.end());
    if (it == v1.end()){
        cout << "没有找不到这个元素" << endl;
    }else{
        cout << "找到了这个元素，它是: " << *it << endl;
    }
}

int main(){
    test01();
    pause();
    return 0;
}