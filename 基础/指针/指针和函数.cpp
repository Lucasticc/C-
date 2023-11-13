/*------------------------------------------------------------------------------
 * @file    指针和函数.CPP
 * @author  FIRMWARE TEAM 
 * @date    2023/11/13 14:10:08
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
--------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

//如果是地址传递 可以修改实参
//传递的是数值会重新开辟一片空间 不会修改实参

void swap2(int *p1,int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout<<*p2<<endl;


}

int main()
{
    int a = 10;
    int b = 20;
    swap2(&a,&b);
    cout<<b<<endl;

    return 0;
}
