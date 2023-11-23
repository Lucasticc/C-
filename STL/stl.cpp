/*------------------------------------------------------------------------------
 * @file    STL.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/17 12:54:42
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
 * ----------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm> //标准算法的头文件
using namespace std;

//stl中六大组件 容器 算法 迭代器 仿函数 适配器 空间分配器
//容器（Containers）：容器是用于存储和组织数据的对象。STL提供了多种容器，如向量（vector）、链表（list）、集合（set）、映射（map）等。

// 算法（Algorithms）：算法是对数据进行操作和处理的函数模板。STL提供了大量的算法，包括排序、搜索、合并、变换等。

// 迭代器（Iterators）：迭代器是用于遍历容器中元素的对象。
//它提供了一种统一的访问容器元素的方式，使得算法可以独立于容器的具体实现而操作元素。迭代器分为输入迭代器、输出迭代器、前向迭代器、双向迭代器和随机访问迭代器等不同类型。

// 仿函数（Functors）：仿函数是一种行为类似函数的对象，可以通过重载函数调用运算符 () 来实现。STL中的算法可以接受仿函数作为参数，从而实现更加灵活的数据处理操作。

// 适配器（Adapters）：适配器是用于修改容器或算法接口的对象。
//STL提供了多种适配器，如栈（stack）、队列（queue）、优先队列（priority_queue）等。这些适配器可以在现有容器或算法的基础上进行功能扩展或转换。

// 分配器（Allocators）：分配器是用于管理动态内存分配的对象。STL的容器和算法都使用分配器来动态分配和释放内存。分配器可以被替换为自定义的分配器，以满足特定的内存管理需求。

void myPrint(int val);
//vector容器存放内置的数据类型
int main()
{   
    //创建一个vector数组
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);     

    //第一种方式
    // vector<int>::iterator itBegin =v.begin();//起始迭代器 指向容器中第一个元素
    // vector<int>::iterator itEnd = v.end(); //结束迭代器 指向容器中的最后一个元素的下一个位置

    // //遍历
    // while (itBegin != itEnd)
    // {
    //     cout<<*itBegin<<endl;
    //     itBegin++;
    // }
    //第二种方式
    // for(vector<int>::iterator it =v.begin();it<v.end();it++){
    //     cout<<*it<<endl;

    // }
    //第三种 利用stl中的遍历算法
    for_each(v.begin(), v.end(), myPrint);
         return 0;
}

void myPrint(int val){
    cout<<val<<endl;
}