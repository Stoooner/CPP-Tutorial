#include <iostream>
using namespace std;
#include <string>

// 创建学生的数据类型(定义结构体的时候关键字struct不可以省略)
struct Student
{
    string name;
    int age;
    int score;
}s3; // 在定义结构体的时候顺便创建结构体变量

// 创建老师结构体
struct Teacher
{
    string name;
    int id;
    int age;
    struct Student stu; // 一对一辅导
};

int main(){
    
    system("pause");
    return 0;
}