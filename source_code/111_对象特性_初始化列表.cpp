#include <iostream>
using namespace std;

/*
    C++�ṩ�˳�ʼ���б��﷨��������ʼ������
    �﷨�� ���캯��(): ����1(ֵ1), ����2(ֵ2) ... {}
*/

class Person{
public:
    // ��ͳ��ʼ������
    // Person(int a, int b, int c){
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }

    // ��ʼ���б�ķ�ʽ��ʼ������
    // Person():m_A(10), m_B(11), m_C(12){

    // }
    // ���ߣ�(���ֳ�ʼ����ʽЧ�ʸ��ߣ�)
    Person(int a, int b, int c):m_A(a), m_B(b), m_C(c){

    }

    int m_A;
    int m_B;
    int m_C;
};

void test01(){
    // Person p(10, 20, 30);//��ͳ���вι���ĳ�ʼ����ʽ
    // Person p; // ��ʼ���б�ķ�ʽ���г�ʼ��
    Person p(11, 15, 13);
    cout << "m_A = " << p.m_A << ", m_B = " << p.m_B << ", m_C = " << p.m_C << endl;
}

int main(){
    test01();
    system("pause");
    return 0;
}