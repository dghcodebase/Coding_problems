#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter two numbers : ";
    cin>>n>>m;

  if( n<=0 || m<=0 )
    {
        cout<<"enter valid numbers";
    }
    else
    {     
        int k,i=1;
        while(k=1)
        {   
            if(i%n==0 && i%m==0)
            {                                                  //approach1
                cout<<"LCM is "<<i;
                break;
            }
            i++;
        }

        // for ( i=1 ; i<=n*m ; i++ )
        // {
        //     if (i%n==0 && i%m==0)
        //     {                                              //approach2
        //         cout<<"LCM is "<<i;
        //         break;
        //     }
        // }
    }
}