#include <iostream>
using namespace std;

// ����ͨ��ָ��������һ����ַ

int main(){
    int a = 10; 
    // ����һ��ָ��: �������� *ָ�����;
    int * p = &a; // ��һ�ַ�ʽ�����a���й�ϵ����

    // ��ָ���¼����a�ĵ�ַ
    // p = &a;

    cout << "a�ĵ�ַ" << p << endl;

    // ����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ棬ָ��ǰ��һ��*��������ã��ҵ�ָ��ָ����ڴ��е�����
    *p = 1000;
    cout << "a = " << *p << endl; 

    // ָ��Ҳ��һ���������ͣ���ռ�õ��ڴ�ռ����£�
    // ��C++�й涨����32λ����ϵͳ�²���ʲô���͵�ָ�붼��ռ��4���ֽڣ���64λ����8���ֽ�
    cout << "sizeof (int *) = " << sizeof(int *) << endl; // ��һ�ַ�ʽ
    cout << "sizeof (int *) = " << sizeof(p) << endl;// �ڶ��ַ�ʽ
    cout << "sizeof (int *) = " << sizeof(double *) << endl;

    system("pause");
    return 0;
}



