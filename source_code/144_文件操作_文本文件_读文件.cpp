#include <iostream>
using namespace std;
#include <unistd.h>
#include <fstream>
#include <string>

/*
    程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
    通过文件可以将数据持久化
    C++中对文件操作需要包含头文件<fstream>

    文件类型分为两类：
        - 文本文件：文件以文本的ASCII码形式存储在计算机中
        - 二进制文件：文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
    
    操作文件三大类：
        - ofstream: 写操作
        - ifstream: 读操作
        - fstream: 读写操作
    
    #===================================
    1. 文本文件
    1.1 写文件，写文件的步骤如下：
        - 包含头文件： #include <fstream>
        - 创建流对象：ofstream ofs;
        - 打开文件：ofs.open("文件路径", 打开方式);
        - 写数据：ofs << "写入的数据";
        - 关闭文件：ofs.close();
    1.2 文件打开方式：
        ios::in 为读文件而打开文件
        ios::out 为写文件而打开文件
        ios::ate 初始位置：文件尾
        ios::app 追加方式写文件
        ios::trunc 如果文件存在先删除，再创建
        ios::binary 二进制方式
    1.3 注意：文件打开方式可以配合使用，利用 | 操作符
        例如用二进制方式写文件: ios::binary | ios::out
    
    1.4 读文件步骤：
        - 包含头文件： #include <fstream>
        - 创建流对象：ifstream ifs;
        - 打开文件：ifs.open("文件路径", 打开方式);
        - 读数据：四种方式读取;
        - 关闭文件：ifs.close();
*/

void test01(){
    // - 包含头文件： #include <fstream>
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open()){
        cout << "文件打开失败。" << endl;
        return;
    }
    // 读取数据
    // 方法1：
    // char buf[1024] = {0};
    // while (ifs >> buf)
    // {
    //     cout << buf << endl;
    // }

    // 方法2：
    // char buf[1024] = {0};
    // while (ifs.getline(buf, sizeof(buf)))
    // {
    //     cout << buf << endl;
    // }

    // 方法3：
    // string buf;
    // while (getline(ifs, buf)){
    //     cout << buf << endl;
    // }

    // 方法4：
    char c;
    while ((c = ifs.get()) != EOF){ // EOF-->end of file
        cout << c;
    }
    

    ifs.close();
}

int main(){
    test01();
    pause();
    return 0;
}