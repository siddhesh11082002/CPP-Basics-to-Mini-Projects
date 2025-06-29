// Fibonacci Series
// Print the first N terms of the Fibonacci series.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter which term do yo want from fibonacci: "<<endl;
    cin>>n;

    int n1=1,n2=1;
    
    if(n == 0){
        cout<<"nth term is 0";
        return 0;
    }
    if(n == 1 && n == 2){
        cout<<"nth term is 1"<<endl;
        return 0;
    }

    for(int i = 2 ; i <n ; i++){
        int temp = n2;
        n2 = n1 + n2;
        n1 = temp;
    }

    cout<<"nth term is "<<n2<<endl;

    return 0;
}