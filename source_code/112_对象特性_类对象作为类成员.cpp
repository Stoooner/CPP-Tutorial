#include <iostream>
using namespace std;
#include <unistd.h>
// C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ�����Ա
/* 
    class A{};
    class B{
        A a; // �����Ա
    };

*/
class Phone{
public:
    Phone(string pName){
        m_PName = pName;
        cout << "Phone���вι������" << endl;
    }
    string m_PName; // �ֻ�Ʒ������
    ~Phone(){
        cout << "Phone��������������" << endl;
    }
};

class Person{
public:
    // m_Phone(pName)��ʵ����Phone m_Phone = pName;�����������ʽת������ʵ��Ҳ�Ͷ�Ӧ����ʾ��Ϊ��Phone m_Phone = Phone(pName)
    Person(string name, string pName):m_Name(name), m_Phone(pName){
        cout << "Person�ĳ�ʼ���б������" << endl;
    }
    string m_Name;
    Phone m_Phone; // ����������Ķ����ʱ���ڹ��챾��Ķ����ʱ����ȹ���������Ķ���, ������˳���빹���෴
    ~Person(){
        cout << "Person��������������" << endl;
    }
};

void test01(){
    Person p("����", "iphone");
    cout << p.m_Name << "����" << p.m_Phone.m_PName << "Ʒ�Ƶ��ֻ�." << endl;
}

int main(){
    test01();
    // system("pause");
    pause();
    return 0;
}