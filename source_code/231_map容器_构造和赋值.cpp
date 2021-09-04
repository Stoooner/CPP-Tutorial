#include <iostream>
using namespace std;
#include <unistd.h>
#include <map>
/*
    map/multimap容器：
        - map中所有元素都是pair
        - pair中第一个元素为key(键值)，起到索引作用，第二个元素为value(实值)
        - 所有元素会根据元素的键值自动排序
        - 本质：map/multimap属于关联式容器，底层结构是用二叉树实现
        - 优点：可以根据key值快速找到value值
        - 区别：map不允许容器中有重复key值元素
               multimap允许容器中有重复key值元素
        - map构造函数：
            map<T1, T2> mp; map默认构造函数
            map(const map &map); 拷贝构造函数
        - map赋值：
            map& operator=(const map &mp); 重载等号操作符
        - C++中的map与python中的dict的区别？
            - C++ --> 红黑树？
            - python --> 哈希表？
*/

void printMap(map<int, int> &m){
    for (map<int, int>::iterator it=m.begin();it!=m.end();it++){
        cout << "key = " << (*it).first << ", value = " << it->second << endl;
    }
    cout << endl;
}

void test01(){
    // 创建map容器
    map<int, int> m;
    // 以匿名对组的方式往map容器中插入数据
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(4, 40));
    printMap(m);

    // 拷贝构造
    map<int, int> m2(m);
    printMap(m);

    // 赋值操作
    map<int, int> m3;
    m3 = m;
    printMap(m3);
}

int main(){
    test01();
    pause();
    return 0;
}