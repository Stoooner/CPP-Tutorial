#include <iostream>
using namespace std;
/* 
1. 有参有返
2. 有参无返
3. 无参有返
4. 无参无返
 */

// 4. 无参无返
void test01(){
    cout << "test01" << endl;
}

// 2. 有参无返
void test02(int a){
    cout << "a = " << a << endl;
}

// 3. 无参有返
int test03(){
    cout << "test03" << endl;
    return 1000;
}

int main(){
    test01();
    test02(100);
    int value = test03();
    cout << value << endl;
    system("pause");
    return 0;
}

