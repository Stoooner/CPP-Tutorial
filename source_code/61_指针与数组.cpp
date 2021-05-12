#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int * p = arr; // arr数组名就是数组的首地址
    cout << "数组第一个元素：" << *p << endl;
    p++; // 让指针往后偏移了四个字节，因为这个是创建的一个整型指针
    cout << "数组第二个元素：" << *p << endl;
    cout << "遍历整个数组：" << endl;
    int *p2 = arr;
    for (int i=0;i<10;i++){
        cout << *p2 << endl;
        p2++;
    } 

    system("pause");
    return 0;
}



