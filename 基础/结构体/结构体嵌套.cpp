/*------------------------------------------------------------------------------
 * @file    结构体嵌套.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/13 20:37:03
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
----------------------------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

//子结构体要放在 结构体之前
struct student
{
    /* data */
    string name;
    int age;
    int score;
};

struct teacher
{
    /* data */
    int id;
    int age;
    string name;
    struct student stu;

};
//结构体值传递
void printStudent(student a){
    a.name = "王五";
    cout<<a.name<<endl;

}
//地址传递
void printStudent2(student *p){
    p->name = "xiaoyu";
    cout<<p->name<<endl;

}

int main()
{
     //创建老师
    teacher t = {1001,20,"王"};
    student t1 = {"王二",128,90};
    t.stu.age = 10;


    student wang = {"王二",128,90};
    printStudent(wang);
    printStudent2(&wang);
    cout<<wang.name<<endl;//值传递不改变实参
         return 0;
}
