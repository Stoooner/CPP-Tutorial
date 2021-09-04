#include <iostream>
using namespace std;
#include <unistd.h>
#include <algorithm>
#include <vector>
#include <string>
/*
    count(iterator beg, iterator end, value);
    value为统计的元素
*/

class Person{
public:
    Person(string name, int age){
        this->m_Name = name;    
        this->m_Age = age;
    }

    // 重载==号，让count知道如何对比Person数据类型
    // 为了避免修改p，底层要求必须得是const
    bool operator==(const Person &p){
        if (this->m_Age == p.m_Age){
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
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(40);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(20);
    int num = count(v1.begin(), v1.end(), 20);
    cout << "20的个数： " << num << endl;

    // ================================
    vector<Person> v2;
    Person p1("A", 10);
    Person p2("B", 20);
    Person p3("C", 20);
    Person p4("D", 40);
    Person p5("E", 30);
    v2.push_back(p1);
    v2.push_back(p2);
    v2.push_back(p3);
    v2.push_back(p4);
    v2.push_back(p5);

    Person p("F", 20);
    int num2 = count(v2.begin(), v2.end(), p);
    cout << num2 << endl;

}

int main(){
    test01();
    pause();
    return 0;
}