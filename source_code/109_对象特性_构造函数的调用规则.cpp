#include <iostream>
using namespace std;
/*
    Ĭ������£�C++���������ٸ�һ�����������������
        - Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)��
        - Ĭ����������(�޲Σ�������Ϊ��)��
        - Ĭ�Ͽ������캯���������Խ���ֵ������
    
    ���캯�����ù������£�
        - ����û������вι��캯������C++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ������죻
        - ����û����忽�����캯������C++�����ṩ�������캯��
*/

class Person{
public:
    Person(){
        cout << "Person��Ĭ�Ϲ��캯������" << endl;
    }

    Person(string name, int age){
        m_name = name;
        m_age = age;
        cout << "Person���вι��캯������" << endl;
    }

    // �������캯����ע�͵�֮��ʹ�����ŷ�����һ������֮�������ܹ�����ϵͳĬ���ṩ�Ŀ������캯����ֻ����û����cout�����Ϣ
    Person(const Person &p){
        m_name = p.m_name;
        m_age = p.m_age;
        cout << "Person�Ŀ������캯������" << endl;
    }
    
    ~Person(){
        cout << "Person��Ĭ��������������" << endl;
    }
    string m_name;
    int m_age;
};

void test01(){
    Person p;
    p.m_age = 18;
    p.m_name = "����";
    Person p2(p);
    cout << "p2�����֣�" << p2.m_name << ", p2�����䣺" << p2.m_age << endl;
}

void test02(){
    Person p;
}

int main(){
    // test01();
    test02();
    system("pause");
    return 0;
}