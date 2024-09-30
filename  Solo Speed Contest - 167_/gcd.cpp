
#include<iostream>
using namespace std;

int main() {
    int a, b, x, gcd;

    // Input two numbers
    cout << "Enter two values: ";
    cin >> a >> b;

    // GCD calculation using Euclidean algorithm
    while(b != 0) {
        x = b;
        b = a % b;
        a = x;
    }

    gcd = a;  // The remaining value of 'a' is the GCD
    cout << "GCD is: " << gcd << endl;

    return 0;
}
