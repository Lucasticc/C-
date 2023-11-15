/*------------------------------------------------------------------------------
 * @file    案例_结构体.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/13 21:17:14
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.--------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct Student
{
    /* data */
    string sName;
    int score;
};
struct Teacher
{
    /* data */
    string tName;
    struct Student sArry[5];
    
};
void allocateSpace(Teacher tArry[],int len){
    string nameSeed = "ABCDE";
    for(int i=0;i<len;i++)
    {
        tArry[i].tName="teacher_";
        tArry[i].tName+=nameSeed[i];
        //学生
        for(int j=0;j<5;j++){
            tArry[i].sArry[j].sName ="Student_";
            tArry[i].sArry[j].sName += nameSeed[j];
            int random = rand()%60;
            tArry[i].sArry[j].score = random;

        }
    }

}
void printfINfo(const Teacher tArry[],int len){
    for(int i=0;i<len;i++){
        cout<<"老师姓名"<<tArry[i].tName<<endl;
        for(int j=0;j<5;j++){
            cout<<"学生姓名"<<tArry[i].sArry[j].sName<<endl;
            cout<<"学生成绩："<<tArry[i].sArry[j].score<<endl;
        }
    }

}

int main()
{   
    Teacher tArry[3];
    int len = sizeof(tArry)/sizeof(tArry[0]);
    allocateSpace(tArry,len);
    printfINfo(tArry,len);
         return 0;
}
