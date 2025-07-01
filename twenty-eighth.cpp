// Check if Array is Sorted
// Determine if an array is sorted in ascending order.

#include<iostream>
using namespace std;

int main(){
    int arr[] ={ 1, 2, 3, 4, 5};
    //int arr[] ={ 1, 2, 7, 4, 5};
    
    int size =5;
    bool is_sorted = true;

    for(int i = 1 ; i < size ; i++){
        if(arr[i-1] > arr[i]){
            cout<<"array is not sorted"<<endl;
            return 0;
        }
    }
    cout<<"array is sorted"<<endl;
    return 0;
}