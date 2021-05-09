#include <iostream>
using namespace std;

// num1和num2称为形参
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

void swap(int num1, int num2){
    cout << "交换之前：" << endl;
    cout << num1 << " " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换之后：" << endl;
    cout << num1 << " " << num2 << endl;
}

int main(){
    int a = 10;
    int b = 15;
    // 这里传入到add函数中的a和b称为实际参数，简称实参
    // 所谓值传递指的就是函数在调用的时候实参将数值传递给了形参，在值传递的时候如果形参发生了改变，是不会影响到实参的
    int sum = add(a, b);
    cout << "sum = " << sum << endl;

    swap(a, b);

    // 值传递时形参改变与否不影响实参
    cout << "a, b = " << a << " " << b << endl;
    
    system("pause");
    return 0;
}

