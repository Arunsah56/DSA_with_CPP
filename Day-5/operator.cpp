#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
    cout<<a<<" "<<b<<" "<<c<<endl;
    if(a > b && a > c)
    {
        cout<<"a is greatest"<<endl;
    }
    else if(b > a && b > c)
    {
        cout<<"b is greatest"<<endl;
    }
    else
    {
        cout<<"c is greatest"<<endl;
    }
    // unary operator
    int x = 10;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of x after pre increment: "<<++x<<endl;
    cout<<"Value of x after post increment: "<<x++<<endl;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of x after pre decrement: "<<--x<<endl;
    cout<<"Value of x after post decrement: "<<x--<<endl;
    cout<<"Value of x: "<<x<<endl;

    //Arithmetic operator
    int num1, num2;
    cout<<"Enter value of num1: ";  
    cin>>num1;
    cout<<"Enter value of num2: ";
    cin>>num2;
    cout<<"num1 + num2 = "<<num1 + num2<<endl;
    cout<<"num1 - num2 = "<<num1 - num2<<endl;
    cout<<"num1 * num2 = "<<num1 * num2<<endl;
    cout<<"num1 / num2 = "<<num1 / num2<<endl;
    cout<<"num1 % num2 = "<<num1 % num2<<endl;

    //comparison operator
    int p, q;
    cout<<"Enter value of p: ";
    cin>>p;
    cout<<"Enter value of q: ";
    cin>>q;
    cout<<"p == q: "<<(p == q)<<endl;
    cout<<"p != q: "<<(p != q)<<endl;
    cout<<"p > q: "<<(p > q)<<endl;
    cout<<"p < q: "<<(p < q)<<endl;
    cout<<"p >= q: "<<(p >= q)<<endl;
    cout<<"p <= q: "<<(p <= q)<<endl;

    //logical operator
    bool a1, a2;
    cout<<"Enter value of a1 (0 or 1): ";
    cin>>a1;
    cout<<"Enter value of a2 (0 or 1): ";
    cin>>a2;
    cout<<"a1 && a2: "<<(a1 && a2)<<endl;
    cout<<"a1 || a2: "<<(a1 || a2)<<endl;
    cout<<"!a1: "<<(!a1)<<endl;
    cout<<"!a2: "<<(!a2)<<endl;

    //bitwise operator
    int b1, b2;
    cout<<"Enter value of b1: ";
    cin>>b1;
    cout<<"Enter value of b2: ";
    cin>>b2;
    cout<<"b1 & b2: "<<(b1 & b2)<<endl;
    cout<<"b1 | b2: "<<(b1 | b2)<<endl;
    cout<<"b1 ^ b2: "<<(b1 ^ b2)<<endl;
    cout<<"~b1: "<<(~b1)<<endl;
    cout<<"~b2: "<<(~b2)<<endl;
    cout<<"b1 << 1: "<<(b1 << 1)<<endl;
    cout<<"b1 >> 1: "<<(b1 >> 1)<<endl;
    
}