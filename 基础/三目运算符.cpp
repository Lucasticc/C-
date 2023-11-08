#include <iostream>
using namespace std;
//三目运算符
int main(){
    int a,b,c;
    a = 10;
    b = 20;
    c = 0;
    c = (a>b?a:b)=10; //前面的为真 后面的为假 还可以将 三目运算符中的值赋值
    cout<<c<<endl;
    cout<<b<<endl;
    return 0;
}