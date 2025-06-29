// Function to Check Prime Number
// Write a function that checks if a number is prime.

#include <iostream>
#include <cmath>
using namespace std;

void is_prime(int n) {
    if (n <= 1) {
        cout << n << " is not a prime number (primes are greater than 1)." << endl;
        return;
    }

    if (n == 2 || n == 3) {
        cout << n << " is a prime number." << endl;
        return;
    }

    if (n % 2 == 0) {
        cout << n << " is not a prime number (it's even and greater than 2)." << endl;
        return;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            cout << n << " is not a prime number (divisible by " << i << ")." << endl;
            return;
        }
    }

    cout << n << " is a prime number." << endl;
}

int main() {
    int num;
    cout << "Enter a number to check for primality: ";
    cin >> num;

    is_prime(num);

    return 0;
}