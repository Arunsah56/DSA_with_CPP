#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for( int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for( int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for( int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for( int i=1; i<=n; i++)
    {
        for(int j=n; j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for( int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<j*j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    char ch = 'a';
    for( int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        ch = ch + 1;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    int count = 1;
    for( int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}