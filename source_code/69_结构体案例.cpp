#include <iostream>
using namespace std;
#include <string>

// ����ѧ������������(����ṹ���ʱ��ؼ���struct������ʡ��)
struct Student
{
    string name;
    int age;
    int score;
}s3; // �ڶ���ṹ���ʱ��˳�㴴���ṹ�����

// ������ʦ�ṹ��
struct Teacher
{
    string name;
    int id;
    int age;
    struct Student stu; // һ��һ����
};

int main(){
    
    system("pause");
    return 0;
}