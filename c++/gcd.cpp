#include<iostream>
using namespace std;
int main()
{
    int n , m ;
    cout<<"enter two numbers : ";
    cin>>n>>m;
    int i,j;
    j=1;
    if ( n<=0 || m<=0 )
    {
        cout<<"enter a valid number ";
    }
    else
    {

    for( i=1; i<=n ;i++ )
    {
        if ( n%i==0 && m%i==0 )
        {
           j=i;
        }
    }
    cout<<"gcd is"<<j;
       

    //    for(i=n;i>=1;i--)
    //    {
    //         if ( n%i==0 && m%i==0 )
    //         {   
    //             cout<<i;
    //             break;
    //         }
    //    }
      



    }

}