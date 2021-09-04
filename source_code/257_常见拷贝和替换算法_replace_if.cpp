#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>
#include <algorithm>
/*
    replace_if(iterator beg, iterator end, _pred, newvalue)
    // 按条件替换元素，将满足条件的元素都替换为newvalue
    // _pred 谓词
*/

void test01(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
}

int main(){
    test01();
    pause();
    return 0;
}