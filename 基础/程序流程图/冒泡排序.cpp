#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int end = sizeof(arr)/sizeof(arr[0])-1;

    for(int i=0;i<end;i++){
        for(int j=0;j<end-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
    for (int a=0;a<=end;a++){
        cout<<arr[a]<<" ";
    }
    return 0;
}