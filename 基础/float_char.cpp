#include<iostream>
using namespace std;

//单精度 float 4字节 有效数字 7位
//双精度 double 8字节 有效数字 15-16位
//小数正常情况下显示六位

//字符型 char 字符变量只占用1个字符 字符型使用单引号 
//单引号内只能有一个字符

#define s1 'd';
int main()
{
    //单精度 正常情况在单精度后面加个f
    float f1 = 13.1425926f;
    cout << "小数=" << f1 <<endl; 
    //双精度
    //默认情况下 小数显示六位
    double f2 = 3.1415926;
    cout << "小数=" << f2 <<endl; 
    //科学计数法
    float f3 = 3e2; //3*10 2次分;
    cout << "小数=" << f3 <<endl; 

    //字符
    cout << "字符=" << s1;  //不加endl 就是不需要换行
    // cout << "字符=" << s1 <<endl;
    char ch = 'A';
    cout << "字符=" << ch <<endl;  //不加endl 就是不需要换行
    
    //字符型变量 对应的ascii编码
    cout <<  int(ch) <<endl;
    // a的是97 A是65



    return 0;
}