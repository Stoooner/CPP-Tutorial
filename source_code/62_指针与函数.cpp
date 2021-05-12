#include <iostream>
using namespace std;

void swap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << ", b = " << b << endl;
}

void swap02(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a = " << *a << ", b = " << *b << endl;
}

int main(){
    // 值传递时
    int a = 10;
    int b = 20;
    // swap01(a, b);
    
    // 地址传递: 地址传递可以修饰实参
    swap02(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    // 地址传递
    system("pause");
    return 0;
}



