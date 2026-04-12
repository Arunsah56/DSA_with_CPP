#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cout<<"TO display name  enter 1\n";
    cout<<"TO display cast  enter 2\n";
    cout<<"TO display roll number  enter 3\n";

    cin>>n;
    switch (n)
    {        case 1:
            cout<<"Arun\n";
            break;
        case 2:
            cout<<"Sah\n";
            break;
        case 3:
            cout<<"Roll number is 12327151\n";
            break;
        default:
            cout<<"Invalid input\n";
    }

}