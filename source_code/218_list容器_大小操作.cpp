#include <iostream>
using namespace std;
#include <unistd.h>
#include <list>

/*
    - empty(); // 判断容器是否为空
    - size(); // 返回容器中元素的个数
    - resize(int num); // 重新指定容器的长度为num，若容器变长，则以默认值填充新位置
                        // 若容器变短，则末尾超过容器长度的元素被删除
    - resize(int num, elem); // 重新指定容器的长度为num, 若容器边长，则以elem值填充新位置
                                // 若容器变短，则末尾超过容器长度的元素被删除
*/

void printList(const list<int> &L){
    for (list<int>::const_iterator it=L.begin();it!=L.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);

    if (l1.empty()){
        cout << "l1为空。" << endl;
    }else{
        cout << "l1不为空" << endl;
        cout << "l1的元素个数: " << l1.size() << endl;
    }

    // 重新制定大小
    l1.resize(10);
    printList(l1);
    cout << "l1的元素个数: " << l1.size() << endl;
}

int main(){
    test01();
    pause();
    return 0;
}