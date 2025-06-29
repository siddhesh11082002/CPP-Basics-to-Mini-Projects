// Factorial of a Number
// Calculate the factorial of a given number N.

#include<iostream>
using namespace std;

int main(){
    int facto;

    cout<<"Enter a non-negative integer: "<<endl;
    cin>>facto;

    unsigned long long factorial1 = 1; // Use `unsigned long long` to avoid overflow for large N
    while(facto>1){
        factorial1 *=facto;
        facto--;
    }

    cout<<"factorial of a given number is : "<<factorial1;

    
    return 0;
}