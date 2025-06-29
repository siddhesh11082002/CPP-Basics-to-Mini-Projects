// Reverse a Number
// Take a number as input and reverse its digits (e.g., 1234 → 4321).

#include<iostream>
using namespace std;

int main(){

    long int num;
    cout<<"enter any number: "<<endl;
    cin>>num;

    int new_num=0 ;
    
    while(num>0){
        int digit = num%10;
        new_num =(new_num*10)+digit;
        num/=10;
        
    }

    cout<<"new number: "<<new_num<<endl;

    return 0;
}