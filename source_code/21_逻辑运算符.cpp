#include <iostream>
using namespace std;

int main(){
    // �߼���
    int a = 10; // ��C++�г���0��������
    cout << "�߼���: " << !a << endl;
    cout << "�߼���: " << !!a << endl;

    // �߼���(������Ϊ������Ϊ��)
    int b = 0;
    cout << "�߼��룺" << (a&&b) << endl;

    // �߼���
    cout << "�߼���" << (a||b) << endl;
    
    system("pause");
    return 0;
}

