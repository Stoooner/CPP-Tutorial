#include <iostream>
using namespace std;
#define day 7

/* 1. C++�涨�ڴ���һ���������߳���ʱ��Ҫָ�����Ӧ���������ͣ������޷������������ڴ� 
   2. �������ʹ��ڵ��������ڸ���������һ�κ��ʵ��ڴ�ռ�
   3. �������Ͷ�Ӧ��ռ�ÿռ�Ӱ�쵽���Ӧ��ȡֵ��Χ
   4. sizeof�ؼ����ܹ�ͳ������������ռ�ڴ��С(�ֽ�): sizeof(��������) ����sizeof(����)
*/
int main(){
    // ������(-32768 ~ 32767)
    short num1 = 32768; // �������ܱ�ʾ����ֵ����ʱ������ת��������
    // ����
    int num2 = 10;
    // ������
    long num3 = 10;
    // ��������
    long long num4 = 10;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    cout << "shortռ�õ��ڴ�ռ��С = " << sizeof(short) << endl;
    cout << "longlongռ�õ��ڴ�ռ��С = " << sizeof(num4) << endl;


    system("pause");
    return 0;
}