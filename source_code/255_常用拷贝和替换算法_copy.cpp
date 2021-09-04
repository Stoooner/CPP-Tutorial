#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>
#include <algorithm>
/*
    v2.resize(v1.size());
    copy(v1.begin(), v1.end(), v2.begin());
    // 需要与transform搬运算法做区别的就是，transform算法在把一个容器的数据搬运到另一个容器的时候，可以在搬运的过程中对数据做相应的处理
    // 而copy算法仅仅只能复制给定区间中的数据，不能对数据做相应的一些处理
*/

void test01(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
}

int main(){
    test01();
    pause();
    return 0;
}