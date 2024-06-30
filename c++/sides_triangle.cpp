#include<iostream>
using namespace std;

int main()
{
    int a , b , c ;
    cout<<" enter side a : ";
    cin>>a;
    cout<<" enter side b : ";
    cin>>b;
    cout<<" enter side c : ";
    cin>>c;
    
    if ( (a+b>c) && (b+c>a) && (a+c>b) )
    {
        cout<<"they can be sides of triangle ";
    }
    
    else 
    {
        cout<<"they can't be sides of triangle ";
    }
}