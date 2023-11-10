#include<iostream>
using namespace std;

int main(){
    int num = 100;
    do{
        int a,b,c;
        a = 0;
        b = 0;
        c = 0;
        a = num%10;
        b = num/10%10;
        c = num/100;
        if(a*a*a+b*b*b+c*c*c==num){
        cout <<num <<endl;
        }
        num++;
    }
    while (num<1000);
    
    return 0;
}