#include <iostream>
using namespace std;
#include <ctime>

int main(){
    int a = 10;
    /* srand((unsigned int)time(NULL));
    int num = rand()%100 + 1; // ����0+1~99+1�����֣����ǹ�������Ļ���α����� */
    while (a > 0){
        cout << "a = " << a << endl;
        a -= 1;
    }
    system("pause");
    return 0;
}

