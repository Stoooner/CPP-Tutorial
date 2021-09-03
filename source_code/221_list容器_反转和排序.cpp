#include <iostream>
using namespace std;
#include <unistd.h>

// reverse(); 反转列表
// sort();列表排序

// 降序的回调函数
bool mycompare(int a, int b){
    return a > b;
}

void test01(){
    // l1.reverse();
    // 需要注意的是所有不支持随机访问迭代器的容器，不可以用标准的算法
    // 这个是错误的方式：sort(l1.begin(), l2.end());
    // 不支持随机访问迭代器的容器，内部会提供对应一些算法
    // 默认排序规则是从小到大
    // l1.sort();
    // 如果要使用降序的话，需要使用回调函数
    // l1.sort(mycompare);
}

int main(){
    test01();
    pause();
    return 0;
}