#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int i;
    
    if ( n==1 )  cout<<"neither prime nor composite";
    else if (n<=0) cout<<"not a prime number";
    else if (n==2) cout<<"its a prime number ";
    else
    {
      for( i=2 ;i<=(n-1); i++)
      {
        if(n%i==0) 
        {
            cout<<"not a prime number";
            return 0;
           
        }
      }
      cout<<"prime number";
    }
}