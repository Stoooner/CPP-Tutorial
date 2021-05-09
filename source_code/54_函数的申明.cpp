#include <iostream>
using namespace std;
/* 
函数的申明是为了告诉编译器函数名称以及如何调用函数，函数的实体主体可以单独定义，
函数的声明可以有多次，但是函数的定义只能有一次
 */

// 函数的声明
int value_max(int a, int b);

int main(){
    int a = 10; 
    int b = 20;
    cout << "最大值为：" << value_max(a, b) << endl;
    system("pause");
    return 0;
}

// 利用函数的声明提前告诉编译器这个函数的存在
int value_max(int a, int b){
    return a > b ? a : b;
}

