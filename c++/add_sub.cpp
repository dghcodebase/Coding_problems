// we have to print the pattern 1-2+3-4+5-6...n terms 

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the numbers : ";
    cin>>num;
    int sum =0 ,add=0 ;
    for( int i=1;i<=num;i++)
    {
        if( i%2==0 )
        {
           sum =sum+i; 
        }
        if (i%2!=0)
        {
            add=add+i;
        }
    }
    cout<<(add-sum);
}