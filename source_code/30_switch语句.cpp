#include <iostream>
using namespace std;

int main(){
    int score = 10;

    switch (score) // switch相比较if来说：switch的条件只能是整型或者字符型，不可以是一个区间，但是它结构清晰，执行效率高
    {
    case 7:
        cout << "输出结果为7" << endl;
        break; // 退出当前分支
    case 8:
        cout << "输出结果为8" << endl;
        break;
    case 10:
        cout << "输出结果为10" << endl;
        break;
    
    default:
        cout << "烂片" << endl;
        break;
    }

    system("pause");
    return 0;
}

