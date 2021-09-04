#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>
#include <algorithm>
/*
    谓词：
        - 返回bool类型的仿函数称为谓词
        - 如果operator()接收一个参数则称为一元谓词
        - 如果operator()接收两个参数则称为二元谓词
*/
// 一元谓词的例子
class GreaterFive{
public:
    bool operator()(int val){
        return val > 5;
    };
};

void test01(){
    vector<int> v;
    for (int i=0;i<10;i++){
        v.push_back(i);
    }
    // 查找容器中是否有大于5的数字, 根据find_if这个算法的传入参数要求，这里可以传入一个匿名的函数对象GreaterFive()
    vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
    if (it == v.end()){
        cout << "未找到" << endl;
    }else{
        cout << "找到了大于5的数字为：" << *it << endl;
    }
}

int main(){
    test01();
    pause();
    return 0;
}