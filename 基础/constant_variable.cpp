#include<iostream>
using namespace std;
//常量的定义
// 创建常量的时候必须指出相应数据类型 否则无法给变量分配内存
// 数据类型存在的原因是 在分配内存的时候根据 定义的数据类型来分配合适的空间
// 使用sizeof 同志数据类型占用内存大小
#define day 7

int main(){
    //定义一个变量
    int a = 10;
    cout<<"da" <<endl;
    cout<<"a=" << a <<endl;
    cout<<"一周一共"<< day <<"天"<< endl;
    //整形 short（2） int（4） long（4） longlong（8）在win下long 为4 在linux long为8
    int s1  = 10;
    cout <<"占用内存空间：" << sizeof(s1) << endl;
    cout <<"long 占用内存空间：" << sizeof(long long) << endl;


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