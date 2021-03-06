#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>

// 容器嵌套容器，数组嵌套一维数组

void test01(){
    vector<vector<int>> v;
    // 创建小容器, 最终将这几个小容器放入到大容器v中
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;

    // 向小容器添加数据
    for (int i=0;i<4;i++){
        v1.push_back(i+1);
        v2.push_back(i+2);
        v3.push_back(i+3);
        v4.push_back(i+4);
    }

    // 将小容器插入大容器
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    // 通过大容器把所有的数据遍历一遍
    for (vector<vector<int>>::iterator it=v.begin();it!=v.end();it++){
        // (*it) ---> 容器：vector<int>
        for (vector<int>::iterator vit=(*it).begin();vit!=(*it).end();vit++){
            cout << *vit << " ";
        }
        cout << endl;
    }
}

int main(){
    test01();
    pause();
    return 0;
}