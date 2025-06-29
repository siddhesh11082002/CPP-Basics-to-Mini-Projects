// Linear Search
// Search for a given number in an array and return its index (or -1 if not found).

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of an array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int idx= -1;
    int find;
    cout<<"Enter the number that you want to find.."<<endl;
    cin>>find;

    for(int i=0; i<n; i++){
        if(arr[i] == find){
            idx = i;
            break;
        }
    }
    if(idx>0){
        cout<<find<<" is at index " <<idx<<endl;
    }else{
        cout<<"element not found...";
    }

    return 0;
}