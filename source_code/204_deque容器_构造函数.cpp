#include <iostream>
using namespace std;
#include <unistd.h>
#include <deque>
/*
    功能：双端数组，可以对头端进行插入删除操作
    deque和vector的区别：
        - vector对于头部的插入需要移动元素，效率低，数据量越大，效率越低
        - deque相对而言，对头部的插入删除速度会比vetor快
        - vector访问元素时的速度会比deque快，这和两者内部实现有关
    
    1. deque构造函数
        - deque<T> deqT; 默认构造形式
        - deque(beg, end); 构造函数将[beg, end)区间中的元素拷贝给自身
        - deque(n, elem); 构造函数将n个elem拷贝给自身
        - deque(const deque &deq); 拷贝构造函数
*/
// const使其只能读，不能改变传入对象的值
void printDeque(const deque<int> d){
    // 相应的要改为const_iterator，变成只读迭代器，使得这个迭代器指向的元素只能读，不能写
    for (deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    // deque<T> deqT; 默认构造形式
    deque<int> d1;
    for (int i=0;i<10;i++){
        d1.push_back(i);
    }
    printDeque(d1);

    // deque(beg, end); 构造函数将[beg, end)区间中的元素拷贝给自身
    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2);

    deque<int> d3(10, 100);
    printDeque(d3);

    deque<int> d4(d3);
    printDeque(d4);
}

int main(){
    test01();
    pause();
    return 0;
}