// Swap Two Numbers
// Take two numbers as input and swap their values without using a third variable.

#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    cout<<"Enter any two random number :"<<endl;
    cin>>num1 >> num2;

    cout<<"before swapping"<<endl;
    cout<<"first number "<<num1<<" second number "<<num2<<endl;

    //simple method
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;

    /*
    //method 2
    // num1=4 num2=3
        num1 = num1+num2;  //num1 =7, num2=3
        num2 = num1-num2;  //num1 = 7, num2=4
        num1 = num1-num2;  //num1=3, num2 = 4
    */

    /* 
    //method 3
    //num1=4 num2=3
        num1= num1^num2;
        num2= num1^num2;
        num1= num1^num2;
    */ 

    /*
    // method 4
        // Swapping logic (only works if a and b ≠ 0)
        a = a * b;  // a = 50 (5 * 10)
        b = a / b;  // b = 5 (50 / 10)
        a = a / b;  // a = 10 (50 / 5)
    */ 
   
    cout<<"after swapping"<<endl;
    cout<<"number first " << num1 << " number second "<<num2<<endl;

    return 0;
}