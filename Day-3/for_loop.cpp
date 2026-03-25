#include<iostream>
using namespace std;

int main()
{
    for(char name='a'; name<='z'; name=name+1)
    {
        cout<<name<<" ";
    }

    
    cout<<endl<<"Enter the num: ";
    int num;
    cin>>num;
    cout<<endl<<"Reverse order: ";
    for(int i=num; i>=1; i--)
    {
        cout<<i<<" ";
    }
}