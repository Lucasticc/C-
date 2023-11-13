/*------------------------------------------------------------------------------
 * @file    指针.CPP
 * @author  FIRMWARE TEAM 
 * @date    2023/11/13 10:02:39
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
 * -----------------------------------------------------------------------------
#define _指针_C_
*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;//创建了一个指针变量
    p=&a;
    cout<<&a<<endl;
    //使用指针 在指针前加*代表解饮用
    *p = 1000;
    cout<<a<<endl;
    cout<<*p<<endl;


    //指针的大小 32位系统中是4个字节 64位系统中是8个字节
    int b = 20;
    int *p1=&a;
    cout<<"sizeof(int*)="<<sizeof(p1)<<endl;


    //建立一个空指针
    int *p2 = NULL;//空指针是不可以访问的

    //野指针  指针指向的是非法空间 咩有权限
    
    //const修饰指针 常量指针 指针的指向可以修改 但是指针指向的值不可以修改
    int c = 101;
    int d = 102;
    const int *p3 = &c;
    cout<<"p3指针的值"<<*p3<<endl;
    //*p3 =20; //常量指针 指针的值不可以修改 
    p3 = &d;//修改了指针的指向
    cout<<"p3指针的值"<<*p3<<endl;

    //指针常量 //与常量指针刚好相反 指针指向的值可以修改 但是指针的指向不可以修改
    int *const p4 = &c; //const修饰的是一个常量
    cout<<"p3指针的值"<<*p4<<endl;
    *p4 = 20; //修改了 指针指向的 值
    cout<<"p3指针的值"<<c<<endl;


    //const即修饰指针还修饰常量
    const int *const p5 =&d;


         return 0;
}

