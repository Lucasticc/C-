/*------------------------------------------------------------------------------
 * @file    结构体CONST.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/13 21:06:50
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.---------------------------------------------*/
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
//在自定义函数中只读
void printStudent2(const Student *p){
    cout<<p->name<<endl;

}

int main()
{
    Student s = {"11",11,11};
    Student *p = &s; //取地址也需要创建一个结构体的指针
    cout<<p->age<<endl; //使用箭头访问
    printStudent2(&s);

         return 0;
}
