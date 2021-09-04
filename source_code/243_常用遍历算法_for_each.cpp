#include <iostream>
using namespace std;
#include <unistd.h>
#include <algorithm>
#include <vector>
/*
    - 算法主要由头文件<algorithm>、<functional>、<numeric>组成
    - <algorithm>是所有STL头文件中最大的一个，范围涉及：比较、交换、查找、遍历操作、复制、修改等
    - <numeric>体积很小，只包括几个在序列上面进行简单数学运算的数学模板
    - <functional>定义了一些模板类，用以声明函数对象

    ===========================
    常用遍历算法
        - for_each // 遍历容器
          for_each(iterator beg, iterator end, _func);
            beg: 开始迭代器
            end: 结束迭代器
            _func:函数或者函数对象
        - transform // 搬运容器到另一个容器中
*/

// 普通函数
void print01(int val){
    cout << val << " ";
}

// 仿函数
class print02{
public:
    void operator()(int val){
        cout << val << " "; 
    }
};

void test01(){
    vector<int> v;
    for (int i=0;i<10;i++){
        v.push_back(i);
    }
    // 这里的第三个参数可以是普通函数，也可以是函数对象
    // 是普通函数时只需要函数名(利用了函数指针)
    // 是仿函数时是一个类对象下的函数，是一个函数对象，所以用类名括号来表示
    for_each(v.begin(), v.end(), print01);
    cout << endl;
    // print02()就是一个匿名的函数对象
    // 这里print02()不是函数调用，而是匿名对象的创建，可以将其换成print02的对象也可以
    for_each(v.begin(), v.end(), print02());
    cout << endl;
}

int main(){
    test01();
    pause();
    return 0;
}