#include<iostream>
using namespace std;

void ConstTest1(){
    const int a = 1;
    const int& b =a;//引用
    int c =2;
    int& d = c;
    int *p;
    p = const_cast<int*>(&a);
    (*p)++;
    c++;
    cout << c << endl;  // 输出：1
    cout << a << endl;  // 输出：1
    cout << b << endl;  // 输出：1 // 引用用的是内存地址的
    cout << &(*p) << endl; // 输出：2
}

int main(){
    ConstTest1();
    return 0;
}