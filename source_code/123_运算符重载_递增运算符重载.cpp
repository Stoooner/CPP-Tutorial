#include <iostream>
using namespace std;
#include <unistd.h>

/*
    递增运算符重载： 通过重载递增运算符，实现自己的整型数据
    需要注意a++和++a的意义：
        - ++a的意义是：先修改操作数使之增加1，然后将增加1过后的a值作为表达式的值；
        - a++的意义是：先将a值作为表达式的值确定下来，再将a增加1，会带来额外的开销；
*/

// 自定义的整型
class MyInteger{
friend ostream &operator<<(ostream &cout, MyInteger myint);
public:
    MyInteger(){
        m_Num = 0;
    }

    // 重载前置++运算符
    // 这里必须以引用的方式进行返回，否则返回的不是自身这个对象
    // 返回对象会调用拷贝构造函数产生新的对象，如果不用原来的对象来获取这个新的对象则原来的对象会不再改变
    MyInteger& operator++(){
        // 先进行++运算，
        m_Num++;
        // 再将自身进行返回
        return *this;
    }

    // 函数重载条件：同一作用域；函数名相同；参数类型不同或个数不同或顺序不同，需要注意的是返回值类型不同是不可以作为函数重载条件的
    // 重载后置++运算符
    // 这个int代表的是占位参数，可以用于区分前置和后置递增
    // 后置递增返回的是值，而且MyInteger temp是一个局部对象(仅在这个函数里)，因为局部对象在当前函数使用完之后就被释放掉了，所以释放掉之后还要返回其引用的话就是非法操作
    // 因此这里不能返回引用，只能返回其结果
    // 这也侧面说明了，除非必须，否则不要使用递增递减的后置版本，否则会增加开销
    // 后置递增耗时(值传递)，函数执行完毕之后局部对象会被栈区给释放掉
    MyInteger operator++(int){
        // 先记录当时结果
        MyInteger temp = *this;
        // 后进行递增
        this->m_Num++;
        // 最后将记录结果返回
        return temp;
    }

private:
    int m_Num;
};

// 为了能够输出(cout)自定义的数据类型，需要先重载一下左移运算符
// 需要注意的是，针对前置递增而言的话，ostream &operator<<里的参数可以是MyInteger myint或者MyInteger &myint
// 但是后置递增这里的参数只能是MyInteger myint，因为后置递增每次返回的是一个temp对象而已，并不是这个对象的引用
// 而当myint++这句执行完后，temp就被销毁了，因此变成了cout << void。因此这里采用的是MyInteger myint
ostream &operator<<(ostream &cout, MyInteger myint){
    cout << myint.m_Num;
    return cout;
}

void test01(){
    MyInteger myint;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}

void test02(){
    MyInteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main(){
    // test01();  
    test02();  
    pause();
    return 0;
}