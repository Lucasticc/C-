/*------------------------------------------------------------------------------
 * @file    函数调用.CPP
 * @author  FIRMWARE TEAM 
 * @date    2023/11/13 09:52:19
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
 * -----------------------------------------------------------------------------
 * @attention 
 
 * THE EXISTING FIRMWARE IS ONLY FOR REFERENCE, WHICH IS DESIGNED TO PROVIDE 
 * CUSTOMERS WITH CODING INFORMATION ABOUT THEIR PRODUCTS SO THEY CAN SAVE 
 * TIME. THEREFORE, MINDMOTION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR 
 * CONSEQUENTIAL DAMAGES ABOUT ANY CLAIMS ARISING OUT OF THE CONTENT OF SUCH 
 * HARDWARE AND/OR THE USE OF THE CODING INFORMATION CONTAINED HEREIN IN 
 * CONNECTION WITH PRODUCTS MADE BY CUSTOMERS. 
 * 
 * <H2><CENTER>&COPY; COPYRIGHT MINDMOTION </CENTER></H2> 
------------------------------------------------------------------------------*/

/* Define to prevent recursive inclusion  ------------------------------------*/
#define _函数调用_C_

/* Files includes  -----------------------------------------------------------*/


/*----------------------------------------------------------------------------*/



#include<iostream>
using namespace std;

// int max(int a,int b); //现在不需要声明 自动执行main函数

int main(){

    cout<<max(2,3);

    return 0;
}

int max(int a,int b){
    return a>b?a:b;
}