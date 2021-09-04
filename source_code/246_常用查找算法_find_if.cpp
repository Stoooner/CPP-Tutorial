#include <iostream>
using namespace std;
#include <unistd.h>
#include <algorithm>
#include <vector>
#include <string>
/*
    按照条件查找元素
    find_if(iterator beg, iterator end, _Pred);
    _Pred: 函数或者谓词(返回bool类型的仿函数)
*/

class Person{
public:
    Person(string name, int age){
        this->m_Name = name;    
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class GreaterFive{
public:
    bool operator()(int val){
        return val > 5;
    }
};

class Greater20{
public:
    bool operator()(Person &p){
        return p.m_Age > 20;
    }
};



void test01(){
    vector<int> v1;
    for (int i=0;i<10;i++){
        v1.push_back(i);
    }
    vector<int>::iterator it =  find_if(v1.begin(), v1.end(), GreaterFive());
    if (it == v1.end()){
        cout << "没有找不到这个元素" << endl;
    }else{
        cout << "找到了这个元素，它是: " << *it << endl;
    }

    // =========================
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

    vector<Person>::iterator it2 = find_if(v2.begin(), v2.end(), Greater20());
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