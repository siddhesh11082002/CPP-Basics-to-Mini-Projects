// Function to Compute Power
// Write a function power(a, b) that computes a^b.

// this questions optimal solution will binary power Exponentiation method but we will solved by bruteforce

#include <iostream>
using namespace std;

void power_of_x_raise_to_n(int a, int b) {
    // Handle 0^0 case (undefined)
    if (a == 0 && b == 0) {
        cout << "0^0 is undefined (indeterminate form)" << endl;
        return;
    }

    // Handle 0^n case
    if (a == 0) {
        cout << a << "^" << b << " = 0" << endl;
        return;
    }

    // Handle x^0 case
    if (b == 0) {
        cout << a << "^" << b << " = 1" << endl;
        return;
    }

    float power = 1;
    bool negative_exponent = (b < 0);
    int abs_b = abs(b);  // Work with positive exponent for calculation

    // Calculate power
    for (int i = 1; i <= abs_b; i++) {
        power *= a;
    }

    // Handle negative exponents
    if (negative_exponent) {
        power = 1 / power;
    }

    // Output result
    cout << a << "^" << b << " = " << power << endl;
}

int main() {
    int x, n;
    cout << "Enter base number: ";
    cin >> x;
    cout << "Enter exponent: ";
    cin >> n;

    power_of_x_raise_to_n(x, n);

    return 0;
}