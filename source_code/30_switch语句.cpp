#include <iostream>
using namespace std;

int main(){
    int score = 10;

    switch (score) // switch��Ƚ�if��˵��switch������ֻ�������ͻ����ַ��ͣ���������һ�����䣬�������ṹ������ִ��Ч�ʸ�
    {
    case 7:
        cout << "������Ϊ7" << endl;
        break; // �˳���ǰ��֧
    case 8:
        cout << "������Ϊ8" << endl;
        break;
    case 10:
        cout << "������Ϊ10" << endl;
        break;
    
    default:
        cout << "��Ƭ" << endl;
        break;
    }

    system("pause");
    return 0;
}

