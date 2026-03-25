#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int last = 0, prev = 1, temp;
    cout<<"Fibonacci series: ";
    for(int i=0; i<n; i++)
    {
        cout<<last<<" ";
        temp = last;
        last = last + prev;
        prev = temp;
    }
    cout<<endl;
}