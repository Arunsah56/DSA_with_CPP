#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int mul = 1, ans = 0;
    while(num > 0)
    {
        int rem = num % 10;
        num /= 10;
        ans = rem * mul + ans;
        mul *= 2;
    }
    cout<<"Decimal equivalent: "<<ans<<endl;
}