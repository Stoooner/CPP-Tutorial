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

// ֵ����
void printInfo1(struct Teacher t){
    t.age = 111111; // ֵ���ݵ�ʱ���βθı���ֵ��Ӱ��ʵ��
    cout << "��ʦ������ " << t.name << ", ��ʦ���䣺" << t.age 
         << ",��ʦid: " << t.id << ", ѧ������:" << t.stu.name 
         << ", ѧ������" << t.stu.age << "��ѧ��������" << t.stu.score << endl;
}

// ��ַ���ݣ��������е��βθ�Ϊָ����Խ�ʡ�ڴ棬���Ҳ��ḳֵһ���µĸ�������
void printInfo2(struct Teacher *t){
    // t->age = 111111;
    cout << "��ʦ������ " << t->name << ", ��ʦ���䣺" << t->age 
         << ",��ʦid: " << t->id << ", ѧ������:" << t->stu.name 
         << ", ѧ������" << t->stu.age << "��ѧ��������" << t->stu.score << endl;
}

// const�����ǳ���ָ�룬ָ���ֵ���ܸã�ָ����Ը�
void printInfo3(const struct Teacher *t){
    // t->age = 76543; // ����const֮��һ�����޸ĵĶ����ͻᱨ�����Է�ֹ�����
    cout << "��ʦ������ " << t->name << ", ��ʦ���䣺" << t->age 
         << ",��ʦid: " << t->id << ", ѧ������:" << t->stu.name 
         << ", ѧ������" << t->stu.age << "��ѧ��������" << t->stu.score << endl;
}

int main(){
    // 2.1 struct Student s1;
    // �ڴ���������ʱ��ؼ���struct����ʡ��
    // struct Student s1;
    Student s1;
    s1.name = "����";
    s1.age = 18;
    s1.score = 100;
    cout << "������ " << s1.name << "�����䣺"<< s1.age << "��������" << s1.score << endl;
    
    // 2.2 struct Student s2 = {...};
    struct Student s2 = {"����", 19, 80};
    cout << "������ " << s2.name << "�����䣺"<< s2.age << "��������" << s2.score << endl;

    //2.3 �ڶ���ṹ���ʱ��˳�㴴���ṹ�����
    s3.name = "����";
    s3.age = 20;
    s3.score = 700; 
    cout << "������ " << s3.name << "�����䣺"<< s3.age << "��������" << s3.score << endl;

    // 2.4 �ṹ������
    struct Student stuArray[4] = {
        {"zhangsaa", 10, 100},
        {"lisi", 20, 200},
        {"wangwu", 30, 300}
    };
    stuArray[3].age = 40;
    stuArray[3].name = "wangermazi";
    stuArray[3].score = 500;

    for (int i=0;i<4;i++){
        cout << "������ " << stuArray[i].name << ", ���䣺" << stuArray[i].age << "���ɼ�" << stuArray[i].score << endl;
    }

    // 2.4 �ṹ��ָ��
    struct Student *p = &s1;
    cout << "������ " << p->name << ", ���䣺" << p->age << "���ɼ�" << p->score << endl;

    // 2.5 �ṹ��Ƕ�׽ṹ��
    struct Teacher t;
    t.id = 100000;
    t.name = "����";
    t.age = 50;
    t.stu.age = s1.age;
    t.stu.name = s1.name;
    t.stu.score = s1.score;
    // cout << "��ʦ������ " << t.name << ", ��ʦ���䣺" << t.age 
    //      << ",��ʦid: " << t.id << ", ѧ������:" << t.stu.name 
    //      << ", ѧ������" << t.stu.age << "��ѧ��������" << t.stu.score << endl;

    // 2.6 �ṹ������������
    printInfo1(t);
    printInfo2(&t);

    // 2.7 �ṹ����const��ʹ�ó���
    printInfo3(&t);

    system("pause");
    return 0;
}