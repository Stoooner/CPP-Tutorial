#include <iostream>
using namespace std;
#define day 7

int main(){
    /* 1. 字符型变量用于显示单个字符: char ch = 'a';
            - 1.1 字符型变量要用单引号括起来，不要使用双引号；
            - 1.2 单引号中只能有一个字符，不可以是字符串；
            - 1.3 c/c++中字符型变量只占1个字节；
            - 1.4 字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元
     */
    char ch = 'a';
    cout << "ch = " << ch << endl; 
    cout << "字符型占用空间大小：" << sizeof(char) << endl;
    // 字符型变量对应的ASCII编码(用了强制类型转换)
    cout << "字符变量对应的ASCII编码：" << (int)ch << endl;
    // 转义字符\n
    cout << "hello world\n";
    cout << "\\" << endl;
    system("pause");
    return 0;
}

