#include<iostream>
using namespace std;

void greet(string name)
{
    cout<<"Hello, "<<name<<"! Welcome to C++ programming."<<endl;
}

int sumOfNumbers(int num1, int num2)
{
    return num1 + num2;
}
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for(int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int multiply(int num1, int num2)
{
    return num1 * num2;
}


int main()
{
    string name;
    int num1, num2;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    greet(name);
    cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<sumOfNumbers(num1, num2)<<endl;
    cout<<"Product of "<<num1<<" and "<<num2<<" is "<<multiply(num1, num2)<<endl;
    if (isPrime(num1))
        cout<<num1<<" is a prime number."<<endl;
    else
        cout<<num1<<" is not a prime number."<<endl;
    if (isPrime(num2))
        cout<<num2<<" is a prime number."<<endl;
    else
        cout<<num2<<" is not a prime number."<<endl;
    cout<<"Factorial of "<<num1<<" is "<<factorial(num1)<<endl; 
    cout<<"Factorial of "<<num2<<" is "<<factorial(num2)<<endl;
    

}