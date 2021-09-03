#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>

/*
    实现两个容器内元素的互换：swap(vec); 将vec与本身的元素互换
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

    vector<int> v2;
    for (int i=10;i>0;i--){
        v2.push_back(i);
    }
    printvector(v2);

    // 两个容器互换
    v1.swap(v2);
    printvector(v1);
    printvector(v2);
}

// 2. swap实际用途
// 巧用swap可以收缩内存空间
void test02(){
    vector<int> v;
    for (int i=0;i<100000;i++){
        v.push_back(i);
    }

    cout << "v的容量 = " << v.capacity() << endl;
    cout << "v的大小 = " << v.size() << endl;

    v.resize(3); // 重新指定大小
    cout << "v的容量 = " << v.capacity() << endl;
    cout << "v的大小 = " << v.size() << endl;

    // 利用swap收缩内存
    // 利用拷贝构造的匿名对象的size和capacity都是3
    // vector<int>(v)是利用v这个对象创建了一个匿名对象，而这种创建匿名对象的方式是按照对象v目前所有的元素个数大小来初始化这个匿名对象
    // 当这个匿名对象创建完并进行swap操作之后，会与对象v互换指针，此时对象v指向匿名对象所指的空间，而匿名对象指向v的空间
    // 完成swap互换之后，这句代码执行完毕，系统会帮我们回收这个匿名对象所指空间，避免浪费
    vector<int>(v).swap(v);
    cout << "v的容量 = " << v.capacity() << endl;
    cout << "v的大小 = " << v.size() << endl;
    



}

int main(){
    // test01();
    test02();
    pause();
    return 0;
}