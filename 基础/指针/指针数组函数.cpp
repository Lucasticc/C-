/*------------------------------------------------------------------------------
 * @file    指针数组函数.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/13 14:21:53
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
-------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
//封装一个函数，利用冒泡排序 实现整形数组的升序排列
void bubbleSort(int *arr,int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            {
            }
            
        }
    }
}

int main()
{   
    int arr[] = {1,3,46,7,8,90,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    int const *p = arr; 
    for(int i=0;i<len;i++){
        cout<<*p<<endl;
        p++;
    }
    bubbleSort(arr,len); //数组的名即为数组的首地址
    cout<<"排序后"<<endl;
    int const *p1 = arr; 
    for(int i=0;i<len;i++){
        cout<<*p1<<endl;
        p1++;
    }



         return 0;
}
