// Find the Largest Number
// Take three numbers as input and print the largest one.

#include<iostream>
using namespace std;

int main(){

    int num1 , num2 , num3;
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            // num1>num2 , num1>num3
            cout<<num1 <<" is largest number.";
        }else{
            // num2<num1<num3
            cout<<num3<<" is largest number.";
        }
    }else if(num2>num3){
        cout<< num2 <<" is largest number";
    }else{
        cout<<num3 <<"is largest number";
    }
    
    return 0;
}