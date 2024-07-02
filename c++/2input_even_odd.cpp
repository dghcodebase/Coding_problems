#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers A and B : ";
    cin>>a>>b;
    int x,y;
    x=a%2;
    y=b%2;
    if(x==0 && y==0)
    {
        cout<<"both are even ";
    }
    else if( x!=0 && y==0 )
    {
        cout<<"A is odd and B is even";
    }
    else if( y!=0 && x==0 )
    {
        cout<<"A is even and B is odd ";
    }
    else
    {
        cout<<"both are odd ";
    }
   
}