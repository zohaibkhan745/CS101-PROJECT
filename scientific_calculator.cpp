#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

unsigned long long permutation(int n, int r) {
    if (n < r) {
        return 0;
    }
    return factorial(n) / factorial(n - r);
}

unsigned long long combination(int n, int r) {
    if (n < r) {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

double add() {
    cout << "Enter your numbers: " << endl;
    int a, b;
    cin >> a >> b;
    return a + b;
}

double subtract() {
    cout << "Enter your numbers: " << endl;
    int a, b;
    cin >> a >> b;
    return a - b;
}

double multiply() {
    cout << "Enter your numbers: " << endl;
    int a, b;
    cin >> a >> b;
    return a * b;
}

double divide() {
    cout << "Enter your numbers: " << endl;
    double a, b;
    cin >> a >> b;
    if (b == 0) {
        cout << "Math error" << endl;
        return 0; // Returning 0 on division by zero
    }
    return a / b;
}

int main() {
    int choice;
    do {
        cout << "\nEnter 1 for Arithmetic Operations" << endl;
        cout << "Enter 2 for Permutation (nPr) and Combination (nCr)" << endl;
        cout << "Enter 0 to exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                int operation;
                do {
                    cout << "\nEnter 1 for addition" << endl;
                    cout << "Enter 2 for subtraction" << endl;
                    cout << "Enter 3 for multiplication" << endl;
                    cout << "Enter 4 for division" << endl;
                    cout << "Enter 5 for factorial" << endl;
                    cout << "Enter 6 to go back to the main menu" << endl;
                    cout << "Enter 0 to exit" << endl;
                    cin >> operation;

                    switch (operation) {
                        case 1:
                            cout << "Result: " << add() << endl;
                            break;
                        case 2:
                            cout << "Result: " << subtract() << endl;
                            break;
                        case 3:
                            cout << "Result: " << multiply() << endl;
                            break;
                        case 4:
                            cout << "Result: " << divide() << endl;
                            break;
                        case 5:
                            int num;
                            cout << "Enter a non-negative integer: ";
                            cin >> num;
                            if (num < 0) {
                                cout << "Please enter a non-negative integer." << endl;
                            } else {
                                unsigned long long result = factorial(num);
                                cout << "Factorial of " << num << " = " << result << endl;
                            }
                            break;
                        case 6:
                            break; // Go back to the main menu
                        case 0:
                            cout << "Exiting.." << endl;
                            return 0;
                        default:
                            cout << "Invalid choice. Please enter between 0-6" << endl;
                            break;
                    }
                } while (operation != 6);
                break;
            case 2:
                int n, r;
                cout << "Enter value for n: ";
                cin >> n;
                cout << "Enter value for r: ";
                cin >> r;
                cout << "Permutation (nPr) is : " << permutation(n, r) << endl;
                cout << "Combination (nCr) is : " << combination(n, r) << endl;
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
