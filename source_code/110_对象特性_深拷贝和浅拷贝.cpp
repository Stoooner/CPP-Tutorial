#include <iostream>
using namespace std;

/*
    - ǳ������ �򵥵ĸ�ֵ����
    - ����� �ڶ�����������ռ䣬���п�������
    - ����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������
*/

class Person{
public:
    Person(){
        cout << "Person��Ĭ�Ϲ��캯������" << endl;
    }

    Person(string name, int age, int height){
        m_name = name;
        m_age = age;
        m_height = new int(height);//��������������new�ڶ���
        cout << "Person���вι��캯������" << endl;
    }
    
    // �Լ�ʵ��һ���������캯�������ǳ��������������
    Person(const Person &p){
        cout << "Person�Ŀ������캯������" << endl;
        m_name = p.m_name;
        m_age = p.m_age;
        // m_height = p.m_height;//������Ĭ��ʵ�ֿ������캯���ľ������д��룬�Ӷ�����˶����ظ��ͷ�
        // �����ָ��ͬ�Ķ���
        m_height = new int(*p.m_height);
    }

    ~Person(){
        // �����������ڴ����Щ���ٴ���ڶ����Ĵ���
        if (m_height != NULL){
            // ǳ����������������Ƕ��������ݻᱻ�ظ��ͷ�
            delete m_height; // �ͷ�m_heightָ��Ķ����ڴ�
            // ��Ҫע����ǣ��ͷ�һ��ָ��(delete ָ����),������ʹ��ָ���ֵ��Ϊ NULL
            // https://www.cnblogs.com/carle-09/p/11554998.html
            // https://blog.csdn.net/qq_41071068/article/details/102791293
            // https://cloud.tencent.com/developer/article/1803993
            m_height = NULL; // ��ֹҰָ�����, ������delete֮�����ÿ�һ��
        }
        cout << "Person��Ĭ��������������" << endl;
    }
    string m_name;
    int m_age;
    int *m_height; // ���
};

void test01(){
    Person p1("����", 18, 168);
    cout << "p1�������� "<< p1.m_name << "��p1�����䣺" << p1.m_age << "��p1����ߣ�"<< *p1.m_height << endl;
    Person p2(p1); // ʹ�ñ�������Ĭ�Ͽ������캯������ɶ����ռ��ظ��ͷţ�����Ҫ����д�������캯��
    cout << "p2�������� "<< p2.m_name << "��p2�����䣺" << p2.m_age << "��p2����ߣ�"<< *p2.m_height << endl;
}

int main(){
    test01();
    system("pause");
    return 0;
}