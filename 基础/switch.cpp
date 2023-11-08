#include<iostream>
using namespace std;

int main(){
    int a = 10;
    switch (a)
    {
    case 10:
        cout<<"还不错\n";
        break;  // bireak跳出当前分支
    
    default:
        break;
    }
    return 0;
}