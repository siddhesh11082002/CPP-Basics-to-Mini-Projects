// Check Palindrome Number
// Determine if a number reads the same backward (e.g., 121 is a palindrome).

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter any number: "<<endl;
    cin>>num;
    
    int demonum = num;
    int revnum = 0;
    while(demonum>0){
        int digit = demonum%10;
        revnum = (revnum*10)+digit;
        demonum /= 10;
    }

    if(num == revnum){
        cout<<"number is palindrome!!!"<<endl;
    }else{
        cout<<"number is not a palindrome..."<<endl;
    }
    
    return 0;
}