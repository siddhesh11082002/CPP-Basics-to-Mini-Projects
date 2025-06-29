// Count Digits in a Number
// Input a number and count how many digits it has.

#include<iostream>
using namespace std;

int main(){

    long int number;
    cout<<"Enter any large number :"<<endl;
    cin>>number; 
    
    int counter =0 ;
    while(number>0){
        number/=10;
        counter++;
    }

    cout<<"count of the digit : "<<counter<<endl;

    return 0;
}