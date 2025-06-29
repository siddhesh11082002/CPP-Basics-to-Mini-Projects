// Function to Find Factorial
// Create a function that returns the factorial of a number.

#include<iostream>
using namespace std;

void findfactorial(int n){
    
    if(n<0){
        cout<<"Enter positive number"<<endl;
        return;
    }

    if(n==0){
        cout<<"factorial of zero is zero"<<endl;
        return;
    }
    if(n==1){
        cout<<"factorial of one is one"<<endl;
        return;
    }

    int factorial=1;
    while(n>0){
        factorial *= n;
        n--;
    }

    cout<<"factorial of a number is : "<<factorial;
    
}

int main(){

    int num;
    cout<<"Enter number to find its factorial "<<endl;
    cin>>num;

    findfactorial(num);
    
    return 0;
}