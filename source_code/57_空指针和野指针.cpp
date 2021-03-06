#include <iostream>
using namespace std;

// 空指针：指针变量指向的是内存中编号为0的空间，它的作用是为了初始化指针变量(一开始定义它的时候还不知道到底指向哪个变量的时候)，需要注意的是空指针指向的内存是不可以访问的
// 野指针：指向非法的内存空间的指针

int main(){
    // 1. 空指针：用于初始化指针变量，不能进行访问
    int * p = NULL;
    // *p = 100; // 这个是错误的，因为是没有权限访问这块内存的，因为0~255之间的内存编号是系统占用的

    // 2. 野指针
    int * p = (int *)0x1100;
    cout << *p << endl; // 会直接报错，因为0x1100这个地址我们根本没有申请就直接开始指向并访问，所以这个是野指针

    // 3. 空指针和野指针都不是我们申请的空间，因此不要随意访问

    system("pause");
    return 0;
}



