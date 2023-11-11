#include<iostream>
using namespace std;

int main(){
    int arr[]={300,200,230,213,1111,12,321423,12314};
    int max = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    for (int i = 0; i <size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
        
    return 0;
}