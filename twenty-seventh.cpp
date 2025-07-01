// Reverse an Array
// Reverse the elements of an array.

#include<iostream>
using namespace std;

int main(){

    int arr[5] ={1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);

    int st = 0;
    int len = size -1;
    
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<""<<endl;

    while(st < len){
        int temp = arr[st];
        arr[st] = arr[len];
        arr[len] = temp;

        st++;
        len--;
    }

    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}