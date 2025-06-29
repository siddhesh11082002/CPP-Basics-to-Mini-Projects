// Calculate Average of Array Elements
// Compute the average of numbers in an array.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<< n << " elements of array"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
    }
    int avg = sum/n;

    cout<<"average of an array : "<<avg;
 
    return 0;
}