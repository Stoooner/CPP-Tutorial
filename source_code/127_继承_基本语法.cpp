#include <iostream>
using namespace std;
#include <unistd.h>

/*
    继承是面向对象三大特性之一, 减少重复代码
*/

// 普通实现页面

// // Java页面
// class Java{
// public:
//     void header(){
//         cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//     }
//     void footer(){
//         cout << "帮助中心、交流合作、站内地图(公共底部)" << endl;
//     }
//     void left(){
//         cout << "Java、Python、C++(公共分类列表)" << endl;
//     }
//     void content(){
//         cout << "Java学科视频" << endl;
//     }
// };

// // Python页面
// class Python{
// public:
//     void header(){
//         cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//     }
//     void footer(){
//         cout << "帮助中心、交流合作、站内地图(公共底部)" << endl;
//     }
//     void left(){
//         cout << "Java、Python、C++(公共分类列表)" << endl;
//     }
//     void content(){
//         cout << "Python学科视频" << endl;
//     }
// };

// 继承实现页面
// 公共页面类
class BasePage{
public:
    void header(){
        cout << "首页、公开课、登录、注册...(公共头部)" << endl;
    }
    void footer(){
        cout << "帮助中心、交流合作、站内地图(公共底部)" << endl;
    }
    void left(){
        cout << "Java、Python、C++(公共分类列表)" << endl;
    }
};

// Java页面
// 语法： class 子类名:继承方式 父类{};
// 子类也成为派生类，父类也称为基类
class Java:public BasePage{
public:
    void content(){
        cout << "Java学科视频" << endl;
    }
};

// Python页面
class Python:public BasePage{
public:
    void content(){
        cout << "Python学科视频" << endl;
    }
};

void test01(){
    cout << "Java视频页面如下：" << endl;
    Java java;
    java.header();
    java.footer();
    java.left();
    java.content();
    cout << "-----------------" << endl;
    cout << "Python视频页面如下：" << endl;
    Python python;
    python.header();
    python.footer();
    python.left();
    python.content();
}

int main(){
    test01();
    pause();
    return 0;
}