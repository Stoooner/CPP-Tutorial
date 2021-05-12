#include <iostream>
using namespace std;

// 参数1：数组的首地址，参数2：数组的长度
void bubblesort(int * arr, int len){
    for (int i=0;i<len-1;i++){
        for (int j=0;j<len-i-1;j++){
            // 数组名是特殊的指针，因此数组名[index]就是解引用，arr[j]--->*(arr+j)
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int *arr, int len){
    for(int i=0;i<len;i++){
        cout << arr[i] << endl;
    }
}

int main(){
    // 创建数组
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    // 数组长度
    int len = sizeof(arr) / sizeof(arr[0]);

    // 创建函数
    bubblesort(arr, len);

    // 打印排序后的数组
    printArray(arr, len);
    system("pause");
    return 0;
}



