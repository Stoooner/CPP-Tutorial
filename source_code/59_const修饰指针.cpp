#include <iostream>
using namespace std;

/* 
    const����ָ���ʱ����ֵ�λ�������������
        1. const����ָ�롪������ָ�룻
            const int * p = &a; --->������⣺����ָ�롪��const *p--->const (*p)--->ֵ�����Ը�
            ��ʱָ���ָ������޸ģ�����ָ��ָ���ֵ�������޸�

        2. const���γ�������ָ�볣����
            int * const p = &a; --->������⣺ָ�볣������* const p--->*(const p)--->ָ�򲻿ɸ�
            ָ���ָ�򲻿����޸ģ�����ָ��ָ���ֵ�����޸�
        
        3. const������ָ�룬�����γ�����
            const int * const p = &a;
            ָ���ָ���ָ��ָ���ֵ�������޸�
*/

int main(){
    int a = 10;
    int b = 20;

    system("pause");
    return 0;
}



