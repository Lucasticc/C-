#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while (i<10)
    {
        cout<<++i<<endl;
    }


    srand((unsigned int)time(NULL));
    int num = rand()%100+1; //生成0-99 %100
    cout<<num<<endl;
    if(10>num){

    }
    
    return 0;
}