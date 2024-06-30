#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

// required ap  1 3 5 7 9 11 13 16 19 21...

    int a=1; 
    int i;                        // initalize the variable ( this is first term in ap ) 
    for ( i=1 ; i<=n ; i++ )

    {                                                
           cout<<a<<endl;            
           a=a+2;                     // increment a according to common difference d 

    }
}