#include <iostream>
using namespace std;

// do...while会先执行一次循环语句，再判断循环条件
int main(){
    int num = 0;
    do{
        cout << "num = " << num << endl;
        num++;
    }while(num<10);

    system("pause");
    return 0;
}

