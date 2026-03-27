#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    char ch = 'a';
    cout<<"Number pattern: "<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int i=1; i<=n; i++)
    {
        char name = 'a';
        for(int j=1; j<=i; j++)
        {
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n; j++)
        {
            if( j >= i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            if(i == j)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n; j++)
        {
            if( j >= i)
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n-row; col++)
        cout<<" ";

        for(int col=1; col<=row; col++)
        cout<<col<<" ";

        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=n-row; col++)
        cout<<"  ";

        for(int col=1; col<=row; col++)
        cout<<col<<" ";

        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int row=1; row<=n; row++)
    {
        char ch = 'A';
        for(int col=1; col<=n-row; col++)
        cout<<"  ";

        for(int col=1; col<=row; col++)
        {
            cout<<ch<<" ";
            ch++;
        }
        

        cout<<endl;
    }

    cout<<endl;
    cout<<"Number pattern: "<<endl;
    for(int row=n; row>=1; row--)
    {
        for(int col=1; col<=row; col++)
        cout<<col<<" ";
        for(int col=1; col<=n-row; col++)
        cout<<"  ";

        

        cout<<endl;
    }
}