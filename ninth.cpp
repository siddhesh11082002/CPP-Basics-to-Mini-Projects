// Grade Evaluator
// Input a student's marks (0-100) and assign a grade:

// A (90-100), B (80-89), C (70-79), D (60-69), F (<60)

#include<iostream>
using namespace std;

int main(){
    int marks;

    cout<<"Enter your marks: "<<endl;
    cin>>marks;

    char grade;

    if(marks>=90 && marks<=100){
        grade = 'A';
    }else if(marks>=80 && marks<90){
        grade = 'B';
    }else if(marks>=70 && marks<80){
        grade = 'c';
    }else if(marks>=60 && marks<70){
        grade = 'D';
    }else if(marks >= 0 && marks<60){
        grade = 'F';
    }else{
        grade ='*';
    }

    if(grade == '*'){
        cout<<"Enter valid marks out of 100.."<<endl;
    }else{
        cout<<"your grade is: "<<grade<<endl;
    }
}