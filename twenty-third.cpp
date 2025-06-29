// Function to Find GCD (Greatest Common Divisor)
// Implement the Euclidean algorithm to find the GCD of two numbers.

// I refer this problems solution from my DSA coding notes.

#include<iostream>
using namespace std;

int naiveGcd(int a , int b){
    
    if(a == 0){
        return b;
    }

    if(b==0){
        return a;
    }
    
    if(a==b){
        return a;
    }

    int gcd =1;
    for(int i =1 ; i<=min(a,b); i++){
        if(a%i == 0 && b%i==0){
            gcd = i;
        }
    }

    return gcd;
}

int euclideanGCD(int a , int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b= b%a;
        }
    }
    if(b == 0){
        return a;
    }
    return b;
}

int main(){
    int num1 , num2;
    cout<<"enter two numbers: ";
    cin>>num1>>num2 ;

    // int gcd1 = naiveGcd(num1 , num2);
    // cout<<"GCD using bruteforce: "<<gcd1<<endl;

    int gcd2 = euclideanGCD(num1 , num2);
    cout<<"GCD using  Euclidean algorithm : "<<gcd2<<endl;

}

