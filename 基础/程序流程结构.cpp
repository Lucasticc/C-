#include<iostream>
using namespace std;
//顺序 选择 循环
#define score3 90.6

int main(){
    //选择
    double score = 0;
    score = 89.9;
    cout<< score<<endl;
    if(score >= 90){
        cout<<"优秀"<<endl;
    }
    else if(score>=80){
        cout<<"良好"<<endl;
        
    }
    else{
        cout<<"不及格"<<endl;
    }


    // 嵌套选择
    double score2 = 0;
    score2 = 100;
    if (score2>90)
    {
        if (score2>=95)
        {
            cout<<"A+\n";
        }
        
        cout<<"A"<<endl;
        // cout<< score3; 
    }
    else if(score2>=80){
        cout<<"B"<<endl;
    }
    else{
        cout<<"C\n";
    }
    
    return 0 ;
}