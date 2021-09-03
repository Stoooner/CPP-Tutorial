#include <iostream>
using namespace std;
#include <unistd.h>
#include <vector>

void printvector(vector<int> &v){
    for (vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;

}

void test01(){
    vector<int> v1; // 默认构造（无参构造）
    for (int i=0; i<10; i++){
        v1.push_back(i);
    }
    printvector(v1);
    // 通过区间的形式进行构造
    vector<int> v2(v1.begin(), v1.end());
    printvector(v2);

    // 需要注意的是，对于一个数组，可以通过下面的方式直接赋值给vector
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v5(a, a+sizeof(a)/sizeof(a[0]));
    cout << "v5 = " << endl;
    printvector(v5);



    // n个elem方式构造
    vector<int> v3(10, 100);
    printvector(v3);
    // 拷贝构造
    vector<int> v4(v3);
    printvector(v4);
}

int main(){
    test01();
    pause();
    return 0;
}