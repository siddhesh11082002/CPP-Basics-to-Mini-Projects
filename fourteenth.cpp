// Multiplication Table
// Print the multiplication table of a given number up to 10.

#include<iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"multiplication table of a given number"<<endl;
    cin>>num;
    
    for(int i=1 ; i <= 10 ; i++){
        int table = i*num ;
        cout<<"\t" <<table;
    }

    return 0;
}