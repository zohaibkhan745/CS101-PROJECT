//in this code we just make an arithematic operation
#include<iostream>
#include <cmath>
using namespace std;
double add(){      // function with the name of "add" to add two numbers.
cout<<"enter your numbers "<<endl;
int a, b;
cin>>a>>b;
return a+b;
}
double subtract(){   //function with the name of subtract to subtract second number from first.
    int a, b;
    cout<<"enter your numbers "<<endl;
    cin>>a>>b;
    return a-b;
}
double multiply(){  // function with the name of multiply to multiply two numbers
     int a, b;
    cout<<"enter your numbers "<<endl;
    cin>>a>>b;
    return a*b;
}
double divide(){       // funtion with the name of divide to divide two numbers
    double a, b;
    cout<<"enter your numbers "<<endl;
    cin>>a>>b;
    if (b==0)
    {
        cout<<"math error"<<endl;
    }
    return a/b;
}
int factorial(int n) {   // function with the name of factorial to find the factorial of a number
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
double degToRad(double degree) 
{
    return degree * (M_PI / 180.0);
}

double calculateSin(double angle)
 {
    double result = sin(degToRad(angle));
    return result;
}

double calculateCos(double angle) 
{
    double result = cos(degToRad(angle));
    return result;
}

double calculateTan(double angle) 
{
    double result = tan(degToRad(angle));
    return result;
}

double calculateCot(double angle) 
{
    double result = 1.0 / tan(degToRad(angle));
    if(angle==90)
    {
        cout<<"Maths error: Result is undefined\n";
    }
    if (isnan(result) || isinf(result)) 
    {
        cout << "Maths error: Result is undefined\n";
        return 0.0;
    }
    return result;
}

double calculateSec(double angle) 
{
    double result = 1.0 / cos(degToRad(angle));
     if(angle==0)
    {
        cout<<"Maths error: Result is undefined\n";
    }
    if (isnan(result) || isinf(result)) 
    {
        cout << "Maths error: Result is undefined\n";
        return 0.0;
    }
    return result;
}

double calculateCosec(double angle) 
{
    double result = 1.0 / sin(degToRad(angle));
    if (isnan(result) || isinf(result)) 
    {
        cout << "Maths error: Result is undefined\n";
        return 0.0;
    }
    return result;
}

int main()
{
     int operation;
    do{
    cout<<endl;
   cout<<"enter 1 for addition "<<endl;
   cout<<"enter 2 for subtraction "<<endl;
   cout<<"enter 3 for multiplication "<<endl;
   cout<<"enter 4 for division "<<endl;
   cout<<"enter 5 for factorial "<<endl;
   cout<<"enter 6 for finding trignometric functions"<<endl;
    cin>>operation;
   switch (operation)
   {
   case 1:
    cout<<add();
    break;
   case 2:
   cout<<subtract();
   break;
   case 3:
   cout<<multiply();
   break;
   case 4:
   cout<<divide();
   break;
   case 5:
   int num;
   cout << "Enter a non-negative integer: ";
   cin >> num;
    if (num < 0) {
        
        cout << "Please enter a non-negative integer." <<endl;
    } else {
       
        unsigned long long result = factorial(num);
        cout << "Factorial of " << num << " = " << result << endl;
    }
    break;
    case 6:
    cout<<"existing the calculator";
    break;
   default:
   cout<<"invslid please enter between 0-6";
    break;
   }}
    
    while(operation !=6);
        double angle;
    cout << "Enter an angle in degrees: ";
    cin >> angle;

    int choice;
    cout << "Choose a trigonometric function:\n";
    cout << "6. Sin\n7. Cos\n8. Tan\n9. Cot\n10. Sec\n11. Cosec\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    double result;
    switch (choice) 
	{
        case 6:
            result = calculateSin(angle);
            break;
        case 7:
            result = calculateCos(angle);
            break;
        case 8:
            result = calculateTan(angle);
            break;
        case 9:
            result = calculateCot(angle);
            break;
        case 10:
            result = calculateSec(angle);
            break;
        case 11:
            result = calculateCosec(angle);
            break;
        default:
            cout << "Invalid choice\n";
            return 1;
    }

    if (isnan(result) || isinf(result)) 
	{
        cout << "Maths error: Result is undefined\n";
    } 
	else 
	{
        cout << "Result: " << result << "\n";
    }
    return 0;
}
