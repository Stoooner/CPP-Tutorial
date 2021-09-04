#include <iostream>
using namespace std;
#include <unistd.h>
#include <map>

/*
    map容器进行插入和删除数据
        - insert(elem); 容器中插入数据
        - clear(); 清空容器元素
        - erase(pos); 删除pos迭代器所指的元素，返回下一个元素的迭代器
        - erase(beg, end); 删除区间[beg, end)区间中的所有元素，返回下一个元素的迭代器
        - erase(key); 删除容器中值为key的元素
*/

void printMap(map<int, int> &m){
    for (map<int, int>::iterator it=m.begin();it!=m.end();it++){
        cout << "key = " << (*it).first << ", value = " << it->second << endl;
    }
    cout << endl;
}   

void test01(){
    map<int, int> m1;
    // 插入, 四种
    m1.insert(pair<int, int>(1, 10));
    m1.insert(make_pair(2, 20));
    m1.insert(map<int, int>::value_type(3, 30));
    m1[7] = 40; // key=7, value=40
    // 在获取某个map的元素的时候，如果按照第四种方式进行获取，此时假设map中仅有4个元素
    // 如果中括号中给的key实际不存在，例如:m[6]，此时系统会给这个key不存在的元素赋予0值，从而创建出一个没有的数
    // 从而在一些找bug的过程中增加困难;
    // 但是在访问元素的时候这种方式比较方便
    printMap(m1);

    // 删除
    m1.erase(m1.begin());
    m1.erase(3); // 只能按照key删除
    m1.erase(m1.begin(), m1.end());
    m1.clear();
}

int main(){
    test01();
    pause();
    return 0;
}