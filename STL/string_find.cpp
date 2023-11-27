/*------------------------------------------------------------------------------
 * @file    STRING_FIND.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/27 14:33:10
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
 * -----------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
void test1(){
    const string str1 = "abcdefg";
    int postion =str1.find("bc");
    cout<<postion<<endl;
    int pos = str1.rfind("bc"); //rind 从右边往左查
    cout<<pos<<endl;


}

void test2(){
    string str2 = "abcdefgh";
    str2.replace(1,3,"1111"); //从1号位置开始3个字符 替换成后面所带的字符
    cout<<str2<<endl;

}

int main()
{
     test1();
     test2();

         return 0;
}
