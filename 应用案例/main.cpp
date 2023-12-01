/*------------------------------------------------------------------------------
 * @file    基于STL演讲比赛流程.CPP
 * @author  Lucas TEAM 
 * @date    2023/11/27 14:48:07
 * @brief   THIS FILE PROVIDES ALL THE FIRMWARE FUNCTIONS.
 * ----------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <iostream>
#include"speechManager.h"

using namespace std;
int main()
{   SpeechManager sm;
    int choice = 0;
    while (true)
    {
        sm.show_Menu();
        cout<<"请输入"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            sm.exitSystem();
            break;
        default:
            system("cls");
            break;
        }
    }

         return 0;
}
