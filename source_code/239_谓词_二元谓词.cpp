#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>
#include <algorithm>
/*
    谓词：
        - 返回bool类型的仿函数称为谓词
        - 如果operator()接收一个参数则称为一元谓词
        - 如果operator()接收两个参数则称为二元谓词
*/

// 二元谓词
class myCompare{
public:
    bool operator()(int v1, int v2){
        return v1 > v2;
    }
};


void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);
    sort(v.begin(), v.end(), myCompare());
}

int main(){
    test01();
    pause();
    return 0;
}