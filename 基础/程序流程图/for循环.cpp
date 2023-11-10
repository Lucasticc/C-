#include<iostream>
using namespace std;
//for循环
int main(){
    for(int i = 0;i<10;i++){
        cout<<i;
        if (i==8)
        {   cout<<"gun\n";
            break;

        }
        
    }
    for(int a=1;a<=100;a++){
        if (a%7==0||a%10==7)
        {
            cout<<a<<endl;
            cout<<"敲桌子"<<endl;
        }
        
    }


    return 0;
}