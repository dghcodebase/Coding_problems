#include<iostream>
using namespace std;
int main()
{
    int a ,b,c,n;
    cout<<"enter the number :";
    cin>>n;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    for (int i=3 ;i<=n; i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
 
}