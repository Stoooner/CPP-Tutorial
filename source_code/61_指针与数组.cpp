#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int * p = arr; // arr����������������׵�ַ
    cout << "�����һ��Ԫ�أ�" << *p << endl;
    p++; // ��ָ������ƫ�����ĸ��ֽڣ���Ϊ����Ǵ�����һ������ָ��
    cout << "����ڶ���Ԫ�أ�" << *p << endl;
    cout << "�����������飺" << endl;
    int *p2 = arr;
    for (int i=0;i<10;i++){
        cout << *p2 << endl;
        p2++;
    } 

    system("pause");
    return 0;
}



