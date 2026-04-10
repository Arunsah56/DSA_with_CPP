#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int i = 1;
    do 
    {
        cout<<i<<" ";
        i++;
    }while(i <= num);
}