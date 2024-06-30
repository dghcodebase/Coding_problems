#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;                                    // approach 1
    int i;
    for( i=1 ; i<=n ; i=i+2 )
    {
        cout<<i<<endl;
    }


    //   int n;
    //    cout<<"enter the numbers:";
    //    cin>>n;                                 // approach 2
    //    int i;
    //    for( i=1 ; i<=n ; i++ )
    //    {
    //      if ( i%2 != 0 )   cout<<i<<endl;
    //    }

}