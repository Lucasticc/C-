/*------------------------------------------------------------------------------
 * @file    结构体数组.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/13 20:17:50
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.------------------------*/
#include <stdio.h>
#include <string>
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
{   //定义结构体 和赋值
    Student stuArry[3] = {
        {"李四", 19, 80},
        {"李四1", 12, 80},
        {"李四2", 11, 80}
    };
    stuArry[2].name = "张三";
    for(int i = 0;i<3;i++){
        cout<<"姓名:"<<stuArry[i].name<<"年龄:"<<stuArry[i].age<<endl;
    }



         return 0;
}
