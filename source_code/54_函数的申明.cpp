#include <iostream>
using namespace std;
/* 
������������Ϊ�˸��߱��������������Լ���ε��ú�����������ʵ��������Ե������壬
���������������ж�Σ����Ǻ����Ķ���ֻ����һ��
 */

// ����������
int value_max(int a, int b);

int main(){
    int a = 10; 
    int b = 20;
    cout << "���ֵΪ��" << value_max(a, b) << endl;
    system("pause");
    return 0;
}

// ���ú�����������ǰ���߱�������������Ĵ���
int value_max(int a, int b){
    return a > b ? a : b;
}

