#include<iostream>
using namespace std;
//四则运算

int main(){
    //加减乘除
    int a1 = 10;
    int b1 = 3;
    cout<<a1+b1<<endl;
    cout<<a1*b1<<endl;
    cout<<a1/b1<<endl; //两个整数相除依然是个整数 去除小数部分
    
    int a3 = 9;
    double d1 = 0.5;
    double d2 = 0.2;
    double d3 = 3.14;
    cout<< d1/d2<<endl; // 两个小数相除 可能还是一个小数

    //取模 两个小数之间是不能进行取模操作
    cout<< a1%b1<<endl;  //取余数

    //递增 递减运算符 前置运算符 先相加再运算 后置运算符 先运算再相加
    int a = 10;
    a++;
    cout<< a<<endl;
    ++a;
    cout<<a<<endl;

    //赋值运算符 = += -=
    int z = 11;
    z%=10;
    cout<<z<<endl;


    //比较运算符 == ！= < > <= >=
    int a5 = 10;
    int b5 = 20;
    cout<< (a5==b5)<<endl; //假
    cout<<(a5!=b5)<<endl; //真

    //逻辑运算符 ！ && ｜｜
    cout<<(!a5)<<endl; //在c++中非0全是真
    cout<<"同真"<<(a5&&b5)<<endl;
    cout<<(a5||b5)<<endl;

    return 0;
}