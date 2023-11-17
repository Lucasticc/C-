/*------------------------------------------------------------------------------
 * @file    案例_结构体英雄.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/15 10:22:56
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.-----------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
//英雄结构体
struct Hero
{
    /* data */
    string name;
    int age;
    string sex;
};
void bubbleSort(Hero HeroArry[],int len){
    for(int i=0;i<len-1;i++){
        for (int j = 0; j < len-1-i; j++)
        {
            if (HeroArry[j].age<HeroArry[j+1].age)
            {
                Hero temp = HeroArry[i];
                HeroArry[j] = HeroArry[j+1];
                HeroArry[j+1] = temp;
            }
            
        }
        
    }
}

void printHero(struct Hero HeroArry[],int len){
    for(int i=0;i<len;i++){
        cout<<HeroArry[i].age<<HeroArry[i].name<<endl;
    }

}

int main()
{
    //存放英雄数组
    Hero HeroArray[5]=
    {
        {"刘备1",21,"男"},
        {"刘备2",23,"男"},
        {"刘备3",27,"女"},
        {"刘备4",32,"男"},
        {"刘备5",23,"女"},

    };
    int len = sizeof(HeroArray)/sizeof(HeroArray[0]);
    bubbleSort(HeroArray,len);
    printHero(HeroArray,len);

         return 0;
}
