/*------------------------------------------------------------------------------
 * @file    指针和数组.CPP
 * @author  FIRMWARE TEAM 
 * @date    2023/11/13 14:00:25
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
 * -----------------------------------------------------------------------------*/
#define _指针和数组_C_
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,8};
    int *p = arr;//数组名就是数组的首地址
    cout<<*p<<endl;
    p++;//使指针向后偏移四个字节
    cout<<*p<<endl;
    cout<<"利用指针遍历数组"<<endl;
    cout<<"数组的长度"<<sizeof(arr)/sizeof(arr[0])<<endl;
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]-1);i++){
        cout<<*p<<endl;
        p++;

    }


         return 0;
}
