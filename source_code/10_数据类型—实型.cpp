#include <iostream>
using namespace std;
#define day 7

int main(){
    // Ĭ������£��ұߵ���ֵ3.14�ڱ༭����ʱ���༭��Ĭ�Ͻ����ϳ�˫����double���ͣ����һ�㵥����float����ĩβ�������ĸf
    float f1 = 3.14f;
    double d1 = 3.14;
    // Ĭ����������һ��С��������ʾ��6λ��Ч����
    cout << "f1 = " << f1 << endl;
    cout << "d1 = " << d1 << endl;
    cout << "float = " << sizeof(float) << endl;
    cout << "double = " << sizeof(double) << endl;
    // ��ѧ������
    float f2 = 3e2; // 3 * 10^2
    cout << "f2 = " << f2 << endl;
    float f3 = 3e-2; // 3 * 10^-2
    cout << "f3 = " << f3 << endl;
    system("pause");
    return 0;
}

