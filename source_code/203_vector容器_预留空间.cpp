#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>

/*
    减少vector在动态扩展容量时的扩展次数
    函数原型：
        - reserve(int len); 容器预留len个元素长度，预留位置不初始化，元素不可访问
*/

void test01(){
    vector<int> v;
    // 利用reserve来预留空间,减少动态开辟内存带来的资源损耗
    v.reserve(100000);
    int num = 0; // 统计内存开辟次数
    int *p = NULL;
    for (int i=0;i<100000;i++){
        v.push_back(i);
        // 每次当vector空间不够准备开辟新空间的时候
        // v的首地址都是会变动的，这种情况下，当p不是指向v的首地址的时候
        // 就让p指向首地址,并记录一下此时已经新开辟的空间
        if (p!=&v[0]){
            p = &v[0];
            num ++;
        }
    }
    cout << "num = " << num << endl;
}

int main(){
    test01();
    pause();
    return 0;
}