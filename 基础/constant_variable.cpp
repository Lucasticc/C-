#include<iostream>
using namespace std;
//常量的定义
// 创建常量的时候必须指出相应数据类型 否则无法给变量分配内存
#define day 7

int main(){
    //定义一个变量
    int a = 10;
    cout<<"da" <<endl;
    cout<<"a=" << a <<endl;
    cout<<"一周一共"<< day <<"天"<< endl;


    // int month = 12;
    const int month = 12;
    // month = 1 const修饰的变量也不能修改
    cout<<"一年一共"<< month <<"月"<< endl;

    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    cout <<"sum="<<sum<< endl;

    return 0;
    
}