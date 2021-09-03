#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>

/*
    对vector容器进行插入和删除
    函数原型：
        - push_back(elem); 尾部插入一个元素elem
        - pop_back(); 删除最后一个元素
        - insert(const_iterator pos, elem); 迭代器指向位置pos，插入元素elem
        - insert(const_iterator pos, int count elem); 迭代器指向位置pos，插入count个元素elem
        - erase(const_iterator pos); 删除迭代器指向的pos位置处的元素
        - erase(const_iterator start, const_iterator end); 删除迭代器从start到end之间的元素
        - clear(); 删除容器中所有的元素
*/

void printvector(vector<int> &v){
    for (vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *it << " "; 
    }
    cout << endl;
}


void test01(){
    vector<int> v1;
    for (int i=0;i<10;i++){
        v1.push_back(i);
    }
    printvector(v1);

    // 尾部删除
    v1.pop_back();
    printvector(v1);

    // 插入
    v1.insert(v1.begin(), 100); // 第一个位置的参数是一个迭代器
    printvector(v1);

    v1.insert(v1.begin()+4, 2, 333);
    printvector(v1);

    // 删除
    vector<int>::const_iterator it = v1.begin();
    v1.erase(it+3);
    printvector(v1);

    // 清空
    v1.clear();
    printvector(v1);

}

int main(){
    test01();
    pause();
    return 0;
}