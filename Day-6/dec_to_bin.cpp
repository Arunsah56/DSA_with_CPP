#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    
    int ans=0, mul = 1;
    while(num>0)
    {
        int rem = num%2;
        num = num/2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout<<"Binary equivalent: "<<ans<<endl;
}