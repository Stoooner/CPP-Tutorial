#include <iostream>
using namespace std;

int main(){
    //1. ������if��䣺�û�����������������Ƿ����600��
    int score;
    cout << "���������ĸ߿�������" << endl;
    cin >> score;
    if (score > 600){
        if (score > 800){
            cout << "��ϲ���������廪��ѧ��" << endl;
        }else if (score > 700){
            cout << "��ϲ�������˱����ѧ��" << endl;
        }else{
            cout << "��ϲ��������һ����ѧ��" << endl;
        }
    }else if(score > 500){
        cout << "��ϲ�������˶�����ѧ��" << endl;
    }else{
        cout << "�������˼���״�ѧ" << endl;
    }

    system("pause");
    return 0;
}

