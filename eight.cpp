// Simple Calculator
// Create a calculator that takes two numbers and an operator (+, -, *, /) and performs the operation.

#include<iostream>
using namespace std;

int main(){

    cout<<"---simple calculator---\n";
    int num1 , num2;
    char op;
    
    cout<<"Enter any two numbers..."<<endl;
    cin>>num1>>num2;

    cout<<"select operation (+,-,/,*) "<<endl;
    cin>>op;

    switch(op){
        case '+' :
            cout<< num1+num2;
            break;
        
        case '-' :
            cout<< num1-num2;
            break;
        
        case '*' :
            cout<< num1*num2;
            break;
        
        case '/' :
            cout<< num1/num2;
            break;
        
        default :
            cout<<"Enter valid operation.";
    }
    return 0;
}