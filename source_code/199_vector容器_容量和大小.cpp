#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>
/*
    vector容器的容量和大小
    函数原型：
        - empty(); // 判断容器是否为空
        - capacity(); // 容器的容量， 容量的size会 >= size()
        - size(); // 返回容器中元素的个数
        - resize(int num); // 重新指定容器的长度为num，若容器变长，则以默认值填充新位置
                           // 若容器变短，则末尾超过容器长度的元素被删除
        - resize(int num, elem); // 重新指定容器的长度为num, 若容器边长，则以elem值填充新位置
                                 // 若容器变短，则末尾超过容器长度的元素被删除
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

    if (v1.empty()){ //为真，则说明容器为空
        cout << "v1为空." << endl;
    }else{
        cout << "v1不为空." << endl;
        // v1.capacity()返回的是动态扩展机制中的v1的总容量，而size()仅仅是返回已有的数据的个数
        cout << "v1的容量为： " << v1.capacity() << endl; 
        cout << "v1的大小为： " << v1.size() << endl; 
    }

    // 重新指定大小
    v1.resize(17);
    printvector(v1);
    // 使用默认的resize方法后，填充了之后0之后，v1.size()返回的就是算上了填充值0的元素个数了
    cout << "v1的容量为： " << v1.capacity() << endl; 
    cout << "v1的大小为： " << v1.size() << endl; 

    v1.resize(17, 100);
    // 使用resize方法后，填充了之后0之后，v1.size()返回的就是算上了填充值0的元素个数了
    cout << "v1的容量为： " << v1.capacity() << endl; 
    cout << "v1的大小为： " << v1.size() << endl; 

    v1.resize(3);
    printvector(v1);
    cout << "v1的容量为： " << v1.capacity() << endl; 
    // 超过resize给定大小后的元素会被删除，但是已经申请下来的capacity()还是之前扩容之后的大小
    cout << "v1的大小为： " << v1.size() << endl; 


}

int main(){
    test01();
    pause();
    return 0;
}