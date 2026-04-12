#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int i = 1;
    while ( i <= num)
    {
        if(i == 6)
        {
            break;
        }
        cout<<i<<" ";
        i++;
    }
}