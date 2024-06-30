#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cout<<"enter the numbers:";
    cin>>a>>b;
    char ch;
    cout<<"enter the operation:";
    cin>>ch;

    switch ( ch )
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"enter valid operation";
    }
}