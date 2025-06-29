// Sum of First N Natural Numbers
// Compute the sum of numbers from 1 to N.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;

    int sum=0;
    for(int i=1 ; i<=n ; i++){
        sum+=i;
    }

    cout<<"Sum of numbers from 1 to N : "<<sum<<endl;

    return 0;
}