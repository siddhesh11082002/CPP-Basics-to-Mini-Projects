// Find the Largest Element in an Array
// Take an array of numbers and print the largest element.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"enter any "<<n<<" number ";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    
    int maxele = INT8_MIN;

    for(int i = 0 ; i<n ;i++){
        if(arr[i] > maxele){
            maxele = arr[i];
        }
    }

    cout<<"largest Element in array is : "<<maxele;

    return 0;
}