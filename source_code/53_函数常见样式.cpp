#include <iostream>
using namespace std;
/* 
1. �в��з�
2. �в��޷�
3. �޲��з�
4. �޲��޷�
 */

// 4. �޲��޷�
void test01(){
    cout << "test01" << endl;
}

// 2. �в��޷�
void test02(int a){
    cout << "a = " << a << endl;
}

// 3. �޲��з�
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

