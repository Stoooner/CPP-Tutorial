#include <iostream>
using namespace std;

// num1��num2��Ϊ�β�
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

void swap(int num1, int num2){
    cout << "����֮ǰ��" << endl;
    cout << num1 << " " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "����֮��" << endl;
    cout << num1 << " " << num2 << endl;
}

int main(){
    int a = 10;
    int b = 15;
    // ���ﴫ�뵽add�����е�a��b��Ϊʵ�ʲ��������ʵ��
    // ��νֵ����ָ�ľ��Ǻ����ڵ��õ�ʱ��ʵ�ν���ֵ���ݸ����βΣ���ֵ���ݵ�ʱ������βη����˸ı䣬�ǲ���Ӱ�쵽ʵ�ε�
    int sum = add(a, b);
    cout << "sum = " << sum << endl;

    swap(a, b);

    // ֵ����ʱ�βθı����Ӱ��ʵ��
    cout << "a, b = " << a << " " << b << endl;
    
    system("pause");
    return 0;
}

