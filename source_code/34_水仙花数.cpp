#include <iostream>
using namespace std;

// do...while会先执行一次循环语句，再判断循环条件
int main(){
    /* 
        1. 对数字取模于10，可以得到这个数字的个位；
        2. 要得到这个数字的十位则先将这个数字除以10，然后由于C++中整数相除只能得到整数的规则，因此在得到的结果后再取模于10就可以得到这个数字的十位
        3. 要得到百位直接整除100
    */
    int num = 100;
    do{
        int a = num % 10; // 获取数字的个位；
        int b = num / 10 % 10; // 获取数字的十位；
        int c = num /100; // 获取数字的百位；
        if(a*a*a + b*b*b + c*c*c == num){
            cout << "num = " << num << endl;
        }
        num++;
    }while(num < 1000);
     
    system("pause");
    return 0;
}

