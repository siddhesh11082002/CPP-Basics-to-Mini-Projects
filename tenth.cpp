// Positive, Negative, or Zero
// Input a number and print whether it's positive, negative, or zero.

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter any number"<<endl;
    cin>>num;

    if(num>0){
        cout<<"number is positive";
    }else if(num<0){
        cout<<"number is negative";
    }else{
        cout<<"number is zero";
    }

    return 0;
}