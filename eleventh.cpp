// Print Numbers from 1 to N
// Take an integer N and print all numbers from 1 to N.

#include<iostream>
using namespace std;

int main(){

    int n ;

    cout<<"Enter any number to print 1 to N"<<endl;
    cin>>n;

    for(int i=1; i<=n ; i++){
        cout<<i<<" ";
    }

    return 0;
}