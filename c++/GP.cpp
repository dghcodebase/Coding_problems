#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int a=1 ;                                  // gp is of order 1 2 4 6 8 32 64 .... 
    int i;
    for( i=1 ; i<=n ; i++ )
    {
        cout<<a<<"  ";
        a=a*2;
    }


}