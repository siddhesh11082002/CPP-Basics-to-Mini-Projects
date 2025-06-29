// Check Leap Year
// Determine if a given year is a leap year or not.

#include<iostream>
using namespace std;

int main(){
    
    //  Divisible by 4 → Usually a leap year.
    //  Divisible by 100 → Not a leap year unless also divisible by 400.
    int year;
    cout<<"Enter your favorite year: "<<endl;
    cin>>year;

    if(year>0){
        if((year%4==0 && year%100 != 0) || (year%400 == 0)){
            cout<<"yeahh!!! It's a leap year..."<<endl;
        }else{
            cout<<year<<" is regular year."<<endl;
        }
    }else{
        cout<< year <<"invalid year.."<<endl;
    }

    return 0;
}

// Note: Most programs assume year > 1582 (Gregorian calendar start).

// Normal Leap Year (2024, 2020) →  Leap

// Non-Leap Year (2023, 1999) →  Not Leap

// Century Non-Leap Year (1900, 2100) →  Not Leap

// Century Leap Year (2000, 2400) →  Leap

// Year 0 → Depends on system (usually Leap but we reject this one)

// Negative Year → Invalid input (should be rejected)