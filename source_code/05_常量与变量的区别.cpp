#include <iostream>
using namespace std;
#define day 7

/* 1. ���������ã����ڼ�¼�����в��ɸ��ĵ�����
   2. C++�ж��峣�������ַ�ʽ��
      2.1 #define �곣���� #define ������ ����ֵ
          - ͨ�����ļ��Ϸ����壬 ��ʾһ������
      2.2 const���εĳ�����const �������� ������ = ����ֵ
          - ͨ���ڳ�������ǰ���Ϲؼ���const�����θñ���Ϊ�����������޸�
    3. const���εĳ�����define����ĳ���������
        - https://www.cnblogs.com/scut-linmaojiang/p/4722338.html��
        - https://blog.csdn.net/sinat_20265495/article/details/52945960
        - https://blog.csdn.net/javaious/article/details/19354133
    4. ��ʶ��(������)�����ǹؼ��֣���������ĸ�����֡��»�����ɣ���ʶ����һ���ַ�ֻ������ĸ�����»��ߣ���ʶ�����ִ�Сд
*/

int main(){
    // �������ã���һ��ָ�����ڴ�ռ������֣������������ڴ�
    // �������� ������ = ����ֵ;
    cout << "һ���ܹ��У�" << day << endl;
    const int month = 12;
    cout << "һ���У�" << month << "�·�" << endl;
    system("pause");
    return 0;
}