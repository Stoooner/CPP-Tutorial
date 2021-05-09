#include <iostream>
using namespace std;

int main(){
    //1. 多条件if语句：用户输入分数，看分数是否大于600分
    int score;
    cout << "请输入您的高考分数：" << endl;
    cin >> score;
    if (score > 600){
        if (score > 800){
            cout << "恭喜您考上了清华大学！" << endl;
        }else if (score > 700){
            cout << "恭喜您考上了北大大学！" << endl;
        }else{
            cout << "恭喜您考上了一本大学！" << endl;
        }
    }else if(score > 500){
        cout << "恭喜您考上了二本大学！" << endl;
    }else{
        cout << "您考上了家里蹲大学" << endl;
    }

    system("pause");
    return 0;
}

