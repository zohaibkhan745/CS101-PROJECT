//in this code we just make an arithematic operation
#include<iostream>
using namespace std;
double add(){      // function with the name of "add" to add two numbers
cout<<"enter your numbers "<<endl;
int a, b;
cin>>a>>b;
return a+b;
}
double subtract(){
    int a, b;
    cout<<"enter your numbers "<<endl;
    cin>>a>>b;
    return a-b;
}
double multiply(){
     int a, b;
    cout<<"enter your numbers "<<endl;
    cin>>a>>b;
    return a*b;
}
double divide(){
    double a, b;
    cout<<"enter your numbers "<<endl;
    cin>>a>>b;
    if (b==0)
    {
        cout<<"math error"<<endl;
    }
    return a/b;
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
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
   cout<<"enter 6 for exit"<<endl;
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
    return 0;
}
