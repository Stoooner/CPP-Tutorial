#include <iostream>
using namespace std;

/* 
    二维数组定义方式：
        1. 数据类型 数组名[行数][列数];
        2. 数据类型 数组名[行数][列数] = {{数据1，数据2}，{数据3，数据4}，...};
        3. 数据类型 数组名[行数][列数] = {数据1，数据2，数据3，数据4，...};
        4. 数据类型 数组名[][列数] = {数据1，数据2，数据3，数据4，...};
*/

int main(){
    // 1. 数据类型 数组名[行数][列数];
    int arr[2][3];
    arr[0][0] = 1;
    // ...

    // 2. 数据类型 数组名[行数][列数] = {{数据1，数据2}，{数据3，数据4}，...};
    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 3. 二维数组名可以查看到所占内存空间以及首地址
    cout << sizeof(arr2) << endl;
    cout << "元素个数：" << sizeof(arr2)/sizeof(arr2[0][0]) << endl;
    cout << "列数：" << sizeof(arr2[0])/sizeof(arr2[0][0]) << endl;
    cout << (long long)arr2 << endl;
    cout << (long long)arr2[0] << endl;
    cout << (long long)arr2[1] << endl;
    cout << (long long)&arr2[0][1] << endl;

    system("pause");
    return 0;
}

