#include <iostream>
using namespace std;

void swap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << ", b = " << b << endl;
}

void swap02(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a = " << *a << ", b = " << *b << endl;
}

int main(){
    // ֵ����ʱ
    int a = 10;
    int b = 20;
    // swap01(a, b);
    
    // ��ַ����: ��ַ���ݿ�������ʵ��
    swap02(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    // ��ַ����
    system("pause");
    return 0;
}



