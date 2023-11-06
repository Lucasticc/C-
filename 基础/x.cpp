#include<iostream>
using namespace std;
//常量的定义
#define day 7

int main(){
    //定义一个变量
    int a = 10;
    cout<<"da" <<endl;
    cout<<"a=" << a <<endl;
    cout<<"一周一共"<< day <<"天"<< endl;


    int month = 12;
    const int month = 12;
    cout<<"一年一共"<< month <<"月"<< endl;

    return 0;
    
}