#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter marks: ";
    int marks;
    cin>>marks;
    if(marks >= 33)
    {
        cout<<"Pass"<<endl<<"Congratulations!";
    }
    else
    {
        cout<<"Fail"<<endl<<"Better luck next time!";
    }
}