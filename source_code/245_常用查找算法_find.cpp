#include <iostream>
using namespace std;
#include <unistd.h>
#include <algorithm>
#include <vector>
#include <string>
/*
    - find; //查找指定元素，找到了则返回指定元素的迭代器，找不到则返回结束迭代器end()
      find(iterator beg, iterator end, value);
    - find_if; //按条件查找元素
    - adjacent_find; //查找相邻重复元素
    - binary_search; 二分查找
    - count; //统计元素个数
    - count_if; //按条件统计元素个数
*/

class Person{
public:
    Person(string name, int age){
        this->m_Name = name;    
        this->m_Age = age;
    }
    // 重载==号，让底层find知道如何对比Person数据类型
    bool operator==(const Person &p){
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age){
            return true;
        }else{
            return false;
        }
    }

    string m_Name;
    int m_Age;
};

void test01(){
    vector<int> v1;
    for (int i=0;i<10;i++){
        v1.push_back(i);
    }
    vector<int>::iterator it =  find(v1.begin(), v1.end(), 5);
    if (it == v1.end()){
        cout << "没有找不到这个元素" << endl;
    }else{
        cout << "找到了这个元素，它是: " << *it << endl;
    }

    vector<Person> v2;
    Person p1("A", 10);
    Person p2("B", 20);
    Person p3("C", 30);
    Person p4("D", 40);
    Person p5("E", 50);
    v2.push_back(p1);
    v2.push_back(p2);
    v2.push_back(p3);
    v2.push_back(p4);
    v2.push_back(p5);

    vector<Person>::iterator it2 = find(v2.begin(), v2.end(), p2);
    if (it2 == v2.end()){
        cout << "没有找不到这个人" << endl;
    }else{
        cout << "找到了这个人，它是姓名为：" << it2->m_Name << "，它的年龄为：" << it2->m_Age << endl;
    }
}

int main(){
    test01();
    pause();
    return 0;
}