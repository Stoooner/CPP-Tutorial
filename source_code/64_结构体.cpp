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

// 值传递
void printInfo1(struct Teacher t){
    t.age = 111111; // 值传递的时候形参改变了值不影响实参
    cout << "老师姓名： " << t.name << ", 老师年龄：" << t.age 
         << ",老师id: " << t.id << ", 学生姓名:" << t.stu.name 
         << ", 学生年龄" << t.stu.age << "，学生分数：" << t.stu.score << endl;
}

// 地址传递，将函数中的形参改为指针可以节省内存，而且不会赋值一个新的副本出来
void printInfo2(struct Teacher *t){
    // t->age = 111111;
    cout << "老师姓名： " << t->name << ", 老师年龄：" << t->age 
         << ",老师id: " << t->id << ", 学生姓名:" << t->stu.name 
         << ", 学生年龄" << t->stu.age << "，学生分数：" << t->stu.score << endl;
}

// const这里是常量指针，指针的值不能该，指向可以改
void printInfo3(const struct Teacher *t){
    // t->age = 76543; // 加入const之后一旦有修改的动作就会报错，可以防止误操作
    cout << "老师姓名： " << t->name << ", 老师年龄：" << t->age 
         << ",老师id: " << t->id << ", 学生姓名:" << t->stu.name 
         << ", 学生年龄" << t->stu.age << "，学生分数：" << t->stu.score << endl;
}

int main(){
    // 2.1 struct Student s1;
    // 在创建变量的时候关键字struct可以省略
    // struct Student s1;
    Student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    cout << "姓名： " << s1.name << "，年龄："<< s1.age << "，分数：" << s1.score << endl;
    
    // 2.2 struct Student s2 = {...};
    struct Student s2 = {"李四", 19, 80};
    cout << "姓名： " << s2.name << "，年龄："<< s2.age << "，分数：" << s2.score << endl;

    //2.3 在定义结构体的时候顺便创建结构体变量
    s3.name = "王无";
    s3.age = 20;
    s3.score = 700; 
    cout << "姓名： " << s3.name << "，年龄："<< s3.age << "，分数：" << s3.score << endl;

    // 2.4 结构体数组
    struct Student stuArray[4] = {
        {"zhangsaa", 10, 100},
        {"lisi", 20, 200},
        {"wangwu", 30, 300}
    };
    stuArray[3].age = 40;
    stuArray[3].name = "wangermazi";
    stuArray[3].score = 500;

    for (int i=0;i<4;i++){
        cout << "姓名： " << stuArray[i].name << ", 年龄：" << stuArray[i].age << "，成绩" << stuArray[i].score << endl;
    }

    // 2.4 结构体指针
    struct Student *p = &s1;
    cout << "姓名： " << p->name << ", 年龄：" << p->age << "，成绩" << p->score << endl;

    // 2.5 结构体嵌套结构体
    struct Teacher t;
    t.id = 100000;
    t.name = "老王";
    t.age = 50;
    t.stu.age = s1.age;
    t.stu.name = s1.name;
    t.stu.score = s1.score;
    // cout << "老师姓名： " << t.name << ", 老师年龄：" << t.age 
    //      << ",老师id: " << t.id << ", 学生姓名:" << t.stu.name 
    //      << ", 学生年龄" << t.stu.age << "，学生分数：" << t.stu.score << endl;

    // 2.6 结构体做函数参数
    printInfo1(t);
    printInfo2(&t);

    // 2.7 结构体重const的使用常见
    printInfo3(&t);

    system("pause");
    return 0;
}