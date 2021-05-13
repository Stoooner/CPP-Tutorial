#include <iostream>
#include <string>
using namespace std;

/* 
    1. 构造函数的分类：
        两种分类方式：
            - 按照参数分为：有参构造和无参构造(也叫默认构造)；
            - 按照类型分为：普通构造和拷贝构造；
        三种调用方式：
            - 括号法；
            - 显示法；
            - 隐式转换法；
    2. 拷贝构造函数的调用时机：
        - 使用一个已经创建完毕的对象来初始化一个新对象；
        - 值传递的方式给函数参数传值；
        - 以值方式返回局部对象；
*/

// 构造函数的分类及调用
// 分类
class Person{
public:
    // 构造函数(无参)
    Person(){
        cout << "Person的无参构造函数调用" << endl;
    }

    // 构造函数(有参)
    Person(int a){
        age = a;
        cout << "Person的有参构造函数调用" << endl;
    }

    // 拷贝构造函数(按照传入的这个对象Person p构造一个和他属性一模一样的对象, 由于要做的是拷贝，因此不能随意修改传入的对象的信息，因此要加上const关键字进行修饰)
    // 而且按照拷贝构造函数的写法，还要以引用的方式传入
    // 引用传入相当于传入的是这个对象p本体，而不是值传递，不然传参的时候就变成了Person p = p1, 这样的话如果无限调用拷贝构造的话，栈直接爆掉
    // 另外，引用是传入对象本体，const是为了防止本体被修改，这里的形参就是常量引用，保证了既传递的是本体，又能让本体无法被修改
    // 只要不是拷贝构造的都称为普通构造，即使是有参构造它也只是拷贝构造
    Person(const Person &p){
        cout << "Person的拷贝构造函数调用" << endl;
        // 这就是拷贝构造对传入的对象进行拷贝的写法了，age就是要创建的对象的属性，p.age就是传入的要被拷贝的对象的属性
        age = p.age; 
    }

    // 析构函数
    ~Person(){
        cout << "person的析构函数调用" << endl;
    }
    int age;
};

// 值传递
void func(Person p){
    
}

// 由于p1是一个局部对象，而这里是以值的方式返回，因此并不是返回p1这个对象，而是按照p1这个对象拷贝一个新的对象出来，返回给外面
Person func2(){
    Person p1;
    cout << "func2中的p1的地址: " << (long long)&p1 << endl;
    return p1;
}

// 调用
void test01(){
    // - 括号法；
    /*
    Person p1; // 默认构造函数(无参)的调用
    Person p2(10); // 有参构造函数的调用
    Person p3(p2); // 拷贝构造函数的调用
    cout << "拷贝构造函数下p2的年龄：" << p2.age << endl;
    cout << "拷贝构造函数下p3的年龄：" << p3.age << endl;*/

    // 注意事项：在调用默认构造函数的时候，不要加上()，不然不会创建对象；
    // 因为下面这行代码，编译器会认为是一个函数的声明，因此不要这样去使用，不然不会创建任何对象
    // Person p(); ---> // void func();

    // - 显示法；
    /*
    Person p1;
    Person p2 = Person(10); // 有参构造函数的显示法调用
    Person p3 = Person(p2); // 拷贝构造函数的显示法调用
    cout << "拷贝构造函数下p2的年龄：" << p2.age << endl;
    cout << "拷贝构造函数下p3的年龄：" << p3.age << endl;
    // 如果仅仅有构造函数，但是左边没有接收的对象，则这个被称为匿名对象，其特点是当前行执行完毕之后，系统会立即回收掉匿名对象
    Person(10);
    // 注意事项2：不要利用拷贝构造函数来初始化一个匿名对象, 下面仅仅做展示，是错误的展示
    // 编译器会认为：Person(p3) === Person p3; 对象声明
    Person(p3);*/

    // - 隐式转换法；
    /*
    Person p4 = 10; // 相当于写成：Person p4 = Person(10); 有参构造调用
    Person p5 = p4; // 隐式转换法的拷贝构造调用
    cout << "拷贝构造函数下p4的年龄：" << p4.age << endl;
    cout << "拷贝构造函数下p5的年龄：" << p5.age << endl;*/

    //拷贝构造函数的调用时机：
    // Person p1(20);
    // // - 使用一个已经创建完毕的对象来初始化一个新对象；
    // Person p2(p1);
    // // - 值传递的方式给函数参数传值；
    // func(p1);// 其实值传递能够调用拷贝构造很简单，因为p1已经是创建了的对象，而p1传递给func的形参p就是在执行：Person p = p1，而这句话就是隐式转换法下的拷贝构造函数调用的写法
    // - 以值方式返回局部对象；
    Person p3 = func2();
    // https://blog.csdn.net/weixin_44238730/article/details/109298907
    // https://blog.csdn.net/zwvista/article/details/6845020
    // https://zhuanlan.zhihu.com/p/22821671
    cout << "test01中的p3的地址: " << (long long)&p3 << endl;

}


int main(){
    test01();
    system("pause");
    return 0;
}