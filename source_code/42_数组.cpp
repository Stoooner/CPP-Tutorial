#include <iostream>
using namespace std;

// 数组的特点: 1. 数组中的元素都是相同的数据类型；2. 数组是由连续的内存位置组成的
/* 
    数组的定义方式：
        1. 数据类型 数组名[数组长度];
        2. 数据类型 数组名[数组长度] = {值1, 值2, ...};
        3. 数据类型 数组名[] = {值1, 值2, ...};(这种方式必须进行初始化，否则系统不知道该数组长度是多少，从而不知道该给其分配多大的内存)
*/
int main(){
    // 1. 数据类型 数组名[数组长度];
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << arr[3] << endl;

    // 2. 数据类型 数组名[数组长度] = {值1, 值2, ...};
    // 如果初始化时没全部初始化，则没初始化的则会被用0来进行填充
    int arr2[5] = {10, 20, 30};

    // 3. 一维数组名的用途：3.1 可以统计整个数组在内存的长度；3.2 可以获取数组在内存中的首地址；
    cout << "arr2数组的内存长度：" << sizeof(arr2) << endl;
    cout << "arr2数组第一个元素的内存长度：" << sizeof(arr2[0]) << endl;
    cout << "arr2数组的元素的个数：" << sizeof(arr2)/sizeof(arr2[0]) << endl;
    cout << "arr2数组的首地址：" << (long long)arr2 << endl;
    cout << "arr2数组的第一个元素的地址：" << (long long)&arr2[0] << endl;
    // 需要注意的是数组名是一个常量，不可以进行赋值操作
    // int max = (arr[i] > max) ? arr[i] : max
    // 数组中最后一位元素的下标计算方式：int end = sizeof(arr) / sizeof(arr[0]) - 1

    system("pause");
    return 0;
}

