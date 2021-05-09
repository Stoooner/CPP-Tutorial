#include <iostream>
using namespace std;

/* 
    const修饰指针的时候出现的位置有三种情况：
        1. const修饰指针——常量指针；
            const int * p = &a; --->辅助理解：常量指针——const *p--->const (*p)--->值不可以改
            此时指针的指向可以修改，但是指针指向的值不可以修改

        2. const修饰常量——指针常量；
            int * const p = &a; --->辅助理解：指针常量——* const p--->*(const p)--->指向不可改
            指针的指向不可以修改，但是指针指向的值可以修改
        
        3. const既修饰指针，又修饰常量；
            const int * const p = &a;
            指针的指向和指针指向的值都不可修改
*/

int main(){
    int a = 10;
    int b = 20;

    system("pause");
    return 0;
}



