// Area of a Circle
// Calculate and print the area of a circle given its radius (use PI = 3.14159).

#include<iostream>
using namespace std;

// #define old_PI 3.14159  //avoid
const int PI = 3.14159;   //preferred
// constexpr int new_PI =3.14159; //best

int main(){

    double radius;
    cout<<"Enter value of radius :"<<endl;
    cin>>radius;

    cout<<"Area of circle: "<<PI*radius*radius;

    return 0;
}