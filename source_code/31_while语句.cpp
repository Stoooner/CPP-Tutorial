#include <iostream>
using namespace std;
#include <ctime>

int main(){
    int a = 10;
    /* srand((unsigned int)time(NULL));
    int num = rand()%100 + 1; // 生成0+1~99+1的数字，但是光是这个的话是伪随机数 */
    while (a > 0){
        cout << "a = " << a << endl;
        a -= 1;
    }
    system("pause");
    return 0;
}

