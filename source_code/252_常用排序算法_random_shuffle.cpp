#include <iostream>
using namespace std;
#include <unistd.h>
#include <algorithm>
#include <vector>
#include <string>
/*
    random_shuffle：指定范围内的元素随机调整次序
    random_shuffle(iterator beg, iterator end);
*/

void myprint(int val){
    cout << val << " ";
}

void test01(){
    // 添加随机数种子，让random_shuffle每次打乱的顺序都不同
    srand((unsigned int)time(NULL));
    vector<int> v1;
    for (int i=0;i<10;i++){
        v1.push_back(i);
    }
    random_shuffle(v1.begin(), v1.end());
    for_each(v1.begin(), v1.end(), myprint);
    cout << endl;
}

int main(){
    test01();
    pause();
    return 0;
}