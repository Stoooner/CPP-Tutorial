#include <iostream>
using namespace std;
#define day 7

int main(){
    /* 1. �ַ��ͱ���������ʾ�����ַ�: char ch = 'a';
            - 1.1 �ַ��ͱ���Ҫ�õ���������������Ҫʹ��˫���ţ�
            - 1.2 ��������ֻ����һ���ַ������������ַ�����
            - 1.3 c/c++���ַ��ͱ���ֻռ1���ֽڣ�
            - 1.4 �ַ��ͱ��������ǰ��ַ�����ŵ��ڴ��д洢�����ǽ���Ӧ��ASCII������뵽�洢��Ԫ
     */
    char ch = 'a';
    cout << "ch = " << ch << endl; 
    cout << "�ַ���ռ�ÿռ��С��" << sizeof(char) << endl;
    // �ַ��ͱ�����Ӧ��ASCII����(����ǿ������ת��)
    cout << "�ַ�������Ӧ��ASCII���룺" << (int)ch << endl;
    // ת���ַ�\n
    cout << "hello world\n";
    cout << "\\" << endl;
    system("pause");
    return 0;
}

