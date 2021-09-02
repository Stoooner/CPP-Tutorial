#include <iostream>
using namespace std;
#include <unistd.h>

/*
    C++的面向对象和泛型编程思想的目的就是复用性提升
    为了建立数据结构和算法的一套标准，诞生了STL

    1. STL的基本概念
        - STL(Standard Template Library，标准模板库)
        - STL从广义上分为：容器(container)、算法(algorithm)和迭代器(iterator)
        - 容器和算法之间通过迭代器进行无缝连接
        - STL几乎所有的代码都采用了模板类或者模板函数
    
    2. STL六大组件
        STL大体分为六大组件，分别是：容器、算法、迭代器、仿函数、适配器(配接器)、空间配置器
        - 容器：各种数据结构，如：vector、list、deque、set、map等，用来存放数据
        - 算法：各种常用算法，如：sort、find、copy、for_each等
        - 迭代器：扮演了容器和算法之间的胶合剂
        - 仿函数：行为类似函数，可作为算法的某种策略
        - 适配器：一种用来修饰容器或者仿函数或者迭代器接口的东西
        - 空间配置器：负责空间的配置与管理
*/

void test01(){
    
}

int main(){
    test01();
    pause();
    return 0;
}