#include<iostream>
using namespace std;

//goto 直接跳转到标记执行

int main(){
    cout<<"1\n";

    goto FLAG;
    cout<<"1\n";
    cout<<"1\n";

    FLAG:
    cout<<"2\n";

    return 0;
}