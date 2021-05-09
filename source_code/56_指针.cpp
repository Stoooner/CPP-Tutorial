#include <iostream>
using namespace std;

// 可以通过指针来保存一个地址

int main(){
    int a = 10; 
    // 定义一个指针: 数据类型 *指针变量;
    int * p = &a; // 另一种方式与变量a进行关系链接

    // 让指针记录变量a的地址
    // p = &a;

    cout << "a的地址" << p << endl;

    // 可以通过解引用的方式来找到指针指向的内存，指针前加一个*代表解引用，找到指针指向的内存中的数据
    *p = 1000;
    cout << "a = " << *p << endl; 

    // 指针也是一种数据类型，它占用的内存空间如下：
    // 在C++中规定了在32位操作系统下不管什么类型的指针都是占用4个字节，在64位上是8个字节
    cout << "sizeof (int *) = " << sizeof(int *) << endl; // 第一种方式
    cout << "sizeof (int *) = " << sizeof(p) << endl;// 第二种方式
    cout << "sizeof (int *) = " << sizeof(double *) << endl;

    system("pause");
    return 0;
}



