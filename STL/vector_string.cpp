/*------------------------------------------------------------------------------
 * @file    VECTOR_STRING.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/18 18:08:09
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
 * ----------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
#include<vector>

using namespace std;

//string构造函数
void test01(){
    string s1;
    const char *str = "hellow word"; //string是一个类内部封装了char*来管理这个字符串
    cout <<"s1="<<str<<endl; //str 解释为一个以null结尾的字符串
    string s2(str);
    cout <<"s2="<<s2<<endl;
    string s3(str);//使用一个string对象初始化另外一个steing对象
    cout <<"s3="<<s3<<endl;
    string s4(10,'a');
    cout <<"s4="<<s4<<endl;
    string s5 = "hellow";// 直接对string进行赋值操作
    s5+=" world"; //可以追加字符串
    s5.append("666");
    cout<<s5<<endl;
    string s6;
    s6.assign("hellow c++");//使用成员函数进行复制
    cout<<s6<<endl;
    s6.assign("hellow c++",5);//使用成员函数进行复制 //只赋值前五个字符串
    cout<<s6<<endl;
            
} 

int main()
{
     test01();


         return 0;
}
