// Check Even or Odd
// Input a number and determine if it's even or odd.

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter your Favorite number: ";
    cin>>num;

    if(num%2 == 0){
        cout<<num<<" is even.";
    }else{
        cout<<num<<" is odd.";
    }

    return 0;
}