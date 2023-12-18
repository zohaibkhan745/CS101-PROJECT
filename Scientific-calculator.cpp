// Function to solve exponential function
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
// Function to solve quadratic equation

#include <iostream>
#include <cmath>
using namespace std;


void solveQuadratic(double a, double b, double c) 
{
    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, negative, or zero
    if (discriminant > 0) 
    {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct.\n";
        cout << "Root 1: " << root1 << "\n";
        cout << "Root 2: " << root2 << "\n";
    } else if (discriminant == 0) 
    {
        // One real root (double root)
        double root = -b / (2 * a);
        cout << "Roots are real and equal.\n";
        cout << "Root: " << root << "\n";
    } else 
    {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(abs(discriminant)) / (2 * a);
        cout << "Roots are complex and conjugate.\n";
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i\n";
    }
}

int main() 
{
    double a, b, c;

    // Input coefficients from the user
    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

    cout << "Enter coefficient c: ";
    cin >> c;

    // Call the function to solve the quadratic equation
    solveQuadratic(a, b, c);

    return 0;
}

























