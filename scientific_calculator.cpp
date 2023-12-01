#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate exponentiation
double exponential(double base, double exponent)
{
    return pow(base, exponent);
}

int main() 
{
    double base, exponent, result;

    // Get input from the user
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    // Calculate and display the result
    result = exponential(base, exponent);
    cout << "Result: " << result << endl;

    return 0;
}
