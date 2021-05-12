#include <iostream>
using namespace std;

// 引用的作用就是给变量起别名，数据类型 &别名 = 原名;
// 引用必须初始化，引用在初始化后不可以改变
// 引用作为函数参数的作用是：函数传参时，可以利用引用的技术让形参修饰实参，优点是可以简化指针修改实参
// 引用就是指针常量，指针指向不可变，但是指向的值可以变、
// 当引用做返回值时，需要注意：不要返回局部变量的引用，函数的调用可以作为左值存在
// 常量引用的作用是：用来修饰形参，防止误操作，在函数参数列表中，可以加const修饰形参，防止形参改变实参
void swap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap02(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// 返回的是局部变量 + 返回值类型是& = 返回的是局部变量的引用
int & test01(){
    int a = 10; // 局部变量存放在栈区
    return a;
}

int & test02(){
    static int a = 10; // 静态变量，存放在全局区，其数据由数据在程序结束后系统释放
    return a;
}

// const这里是为了防止修改值，但是为了不让其修改的话也不要用值传递，因为值传递占内存空间
void showvalue(const int &val){
    cout << "val = " << val << endl;
}

int main(){
    
    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    int c = 20;
    b = c; // 这个仅仅是赋值操作，而不是更改引用
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    int d = 10;
    int e = 20;
    swap01(d, e); // 值传递，形参不会修饰实参
    swap02(d, e); // 引用传递和地址传递一样，形参会修饰实参
    cout << "d = " << d << ", e = " << e << endl;

    // int &ref = test01();
    // cout << "ref" << ref << endl; // 第一次结果正确是因为编译器做了保留
    // cout << "ref" << ref << endl; // 第二次结果错误

    int &ref = test02();
    cout << "ref = " << ref << endl; // 第一次结果正确是因为编译器做了保留
    cout << "ref = " << ref << endl; // 第二次结果错误
    test02() = 1000; // 函数的调用可以作为左值存在
    cout << "ref = " << ref << endl; // 第一次结果正确是因为编译器做了保留
    cout << "ref = " << ref << endl; // 第二次结果错误

    // int &ref2 = 10;// 这个是错误的语法，因为10是常量区的数据，引用必须引一块合法的内存空间
    // 加上const之后这段话就可以了，是因为加上const之后，编译器将代码修改为了int temp = 10; const int &ref2 = temp;
    const int &ref2 = 10;
    // ref2 = 20;这句话报错是因为加入const之后变为只读状态
    showvalue(a);


    system("pause");
    return 0;
}