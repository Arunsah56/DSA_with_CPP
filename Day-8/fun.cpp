#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for(int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int sumOfDigits(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
void greet(string name)
{
    cout<<"Hello, "<<name<<"! Welcome to C++ programming."<<endl;
}

int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int num1;
    cout<<"Enter second number: ";
    cin>>num1;
    greet(name);
    if (isPrime(num))
        cout<<num<<" is a prime number."<<endl;
    else
        cout<<num<<" is not a prime number."<<endl;

    cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
    if (isPrime(num1))
        cout<<num1<<" is a prime number."<<endl;
    else
        cout<<num1<<" is not a prime number."<<endl;

    cout<<"Factorial of "<<num1<<" is "<<factorial(num1)<<endl;

    if (isPrime(num-num1))
        cout<<num-num1<<" is a prime number."<<endl;
    else
        cout<<num-num1<<" is not a prime number."<<endl;

    cout<<"Factorial of "<<num-num1<<" is "<<factorial(num-num1)<<endl;
    if (isPrime(num1-num))
        cout<<num1-num<<" is a prime number."<<endl;
    else
        cout<<num1-num<<" is not a prime number."<<endl;

    cout<<"Factorial of "<<num1-num<<" is "<<factorial(num1-num)<<endl;
    cout<<"Sum of "<<num<<" and "<<num1<<" is "<<sumOfDigits(num, num1)<<endl;

    return 0;

}