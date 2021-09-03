#include <iostream>
using namespace std;
#include <unistd.h>
#include <queue>
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

void test01(){
    queue<Person> q;
    Person p1("张三", 10);
    Person p2("李四", 20);
    Person p3("王五", 30);
    Person p4("赵四", 40);
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    // 判断只要队列不为空，查看对头和对位，出队
    while(!q.empty()){
        cout << "队头元素, 姓名： " << q.front().m_Name << "年龄： " << q.front().m_Age << endl;
        cout << "队尾元素, 姓名： " << q.back().m_Name << "年龄： " << q.back().m_Age << endl;
        q.pop(); // 从队头移除第一个元素
    }
    cout << "队列大小为： " << q.size() << endl; 
}

int main(){
    test01();
    pause();
    return 0;
}