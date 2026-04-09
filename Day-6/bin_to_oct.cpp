#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Binary equivalent: "<<num<<endl;
    int mul = 1, dec = 0;
    while(num > 0)
    {
        int rem = num % 10;
        num /= 10;
        dec = rem * mul + dec;
        mul *= 2;
    }
    cout<<"Decimal equivalent: "<<dec<<endl;
    int mul1 = 1, oct = 0;
    while(dec > 0)
    {
        int rem = dec % 8;
        dec /= 8;
        oct = rem * mul1 + oct;
        mul1 *= 10;
    }
    cout<<"Octal equivalent: "<<oct<<endl;
}