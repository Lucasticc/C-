/*------------------------------------------------------------------------------
 * @file    结构体指针.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/13 20:29:26
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
----------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct Student
{
    /* data */
    string name;
    int age;
    int score;

};

int main()
{
    Student s = {"11",11,11};
    Student *p = &s; //取地址也需要创建一个结构体的指针
    cout<<p->age; //使用箭头访问

         return 0;
}
