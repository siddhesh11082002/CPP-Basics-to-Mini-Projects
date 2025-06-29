// Function to Check Armstrong Number
// A number is Armstrong if the sum of cubes of its digits equals the number itself (e.g., 153).

#include<iostream>
using namespace std;

void isArmstrong(int a){
    int sum =0 ;
    int demo = a;

    while(demo > 0){
        int digit = demo%10;
        sum += (digit*digit*digit);

        demo /= 10;
    }
    
    if(sum == a){
        cout<<"number is Armstrong!!!";
    }
    else{
        cout<<"number is not Armstrong..";
    }
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    isArmstrong(num);

    return 0;
}