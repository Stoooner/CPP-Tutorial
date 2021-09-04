#include <iostream>
using namespace std;
#include <unistd.h>
#include <functional>
#include <vector>
#include <algorithm>
/*
    - template<class T>bool equal_to<T> // 等于仿函数
    - template<class T>bool not_equal_to<T> // 不等于
    - template<class T>bool greater<T> // 大于
    - template<class T>bool greater_equal<T> // 大于等于
    - template<class T>bool less<T> // 小于
    - template<class T>bool less_equal<T> // 小于等于
*/

void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);

    for (vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;

    // 降序排序
    // 使用STL内建的大于仿函数进行排序，greater<int>()通过内建的仿函数创建对象
    sort(v.begin(), v.end(), greater<int>());
    for (vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    test01();
    pause();
    return 0;
}