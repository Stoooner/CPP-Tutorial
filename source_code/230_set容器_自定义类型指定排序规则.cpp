#include <iostream>
using namespace std;
#include <unistd.h>
#include <set>
#include <string>

class Person{
public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

class comparePerson{
public:
    bool operator()(const Person &p1, const Person &p2){
        return p1.m_Age > p2.m_Age;
    }
};

void printSet(set<Person, comparePerson> &s){
    for(set<Person, comparePerson>::iterator it=s.begin();it!=s.end();it++){
        cout << "姓名： " << it->m_Name << ", 年龄： " << it->m_Age << endl;
    }
}

void test01(){
    // 自定义数据类型需要指定排序规则
    set<Person, comparePerson> s;
    Person p1("刘备", 20);
    Person p2("张飞", 25);
    Person p3("关羽", 30);
    Person p4("赵云", 35);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    printSet(s);
}

int main(){
    test01();
    pause();
    return 0;
}