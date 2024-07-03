#include<iostream>
using namespace std;

int main()
{
    int num ,power;
    cout<<"enter the numbers : ";
    cin>>num>>power;

    int i,j=num;
    for ( i=1 ; i<power ; i++ )
    {
        j=j*num;
    }
    cout<<j;
    
}
