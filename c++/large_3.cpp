#include<iostream>
using namespace std; 

int main()
{   
    int a , b , c ;                                    
    cout<<"enter the number A :";         
    cin>>a;
    cout<<"enter the number B :";               
    cin>>b;
    cout<<"enter the number C :";              
    cin>>c;
    
    if ( a>b && a>c )
    {
        cout<<"A is greater";
    }
    else if( b>a && b>c )
    {
        cout<<"B is greater";
    }
    else
    {
        cout<<"C is greater";
    }
    
}