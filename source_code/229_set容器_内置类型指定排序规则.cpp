#include <iostream>
using namespace std;
#include <unistd.h>
#include <set>

/*
    set容器默认的排序规则是从小到大，可以利用仿函数改变排序规则
*/

class Mycompare{
public:
    bool operator()(int v1, int v2){
        return v1 > v2;
    }
};

void printSet(set<int, Mycompare> &s){
    for(set<int, Mycompare>::iterator it=s.begin();it!=s.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    set<int> s1;
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(50);
    s1.insert(20);
    // printSet(s1);

    // 指定排序规则为从大到小
    set<int, Mycompare> s2;
    s2.insert(10);
    s2.insert(40);
    s2.insert(30);
    s2.insert(50);
    s2.insert(20);
    printSet(s2);
}

int main(){
    test01();
    pause();
    return 0;
}