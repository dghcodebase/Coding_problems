#include<iostream>
using namespace std;

int main()
{
    int n,count;
    cout<<"enter the number : ";
    cin>>n;
    count=0;

    int k;
    while(k=1)
    {   
        n=n/10;
        if(n==0)
        {
            cout<<"no of digits are :"<<count+1;
            break;
        }
        count++;  
    }
    
  

}