#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>

/*
    对vector中的数据进行存取操作
    函数原型：
        - at(int index); 返回索引为index的元素
        - operator[index]; 返回索引为index的元素
        - front(); 返回容器中第一个元素
        - back(); 返回容器中最后一个数据元素
*/

void printvector(vector<int> &v){
    // for (vector<int>::iterator it=v.begin();it!=v.end();it++){
    //     cout << *it << " "; 
    // }

    for (int i=0;i<v.size();i++){
        // cout << v[i] << " "; 
        cout << v.at(i) << " ";
    }

    cout << endl;
}


void test01(){
    vector<int> v1;
    for (int i=0;i<10;i++){
        v1.push_back(i);
    }
    printvector(v1);

    cout << v1.front() << " " << v1.back() << endl;
}

int main(){
    test01();
    pause();
    return 0;
}