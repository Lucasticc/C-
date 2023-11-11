#include<iostream>
using namespace std;
//在一段连续的内存位置
//都是相同的数据类型

int main(){
    int arr[5];
    for(int i=0;i<4;i++){
        arr[i] = i;
    }
cout<<arr[0]<<endl;
    int arr2[5] = {10,201,20};
    for (size_t i = 0; i < 3; i++)
    {
        cout<<arr2[i]<<endl;;
    }
    
    cout<<arr2[1]<<endl;
    
    int arr3[] = {1,2,3,4,5};
    cout<<sizeof(arr3)/sizeof(arr3[0])<<endl; //sizeof(arr3)返回整个数组的字节大小，sizeof(arr3[0])返回单个元素的字节大小。


    //数组名称的用途
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    return 0;
}