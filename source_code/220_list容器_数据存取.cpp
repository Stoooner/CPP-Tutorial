#include <iostream>
using namespace std;
#include <unistd.h>

// front();返回第一个元素
// back();返回最后一个元素
// list由于其链表的性质，不是用连续线性空间存储数据，不支持随机访问，所以不能用[]或者at进行访问
// list重载了++，让其能够在地址上进行+1的操作，但是没有重载+符号，因为+1就有可能+2, 但是这是其性质所不允许的

void test01(){
    
}

int main(){
    test01();
    pause();
    return 0;
}