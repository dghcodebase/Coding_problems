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
        int j=1,i=1 ;
        while(i=j)
        {    
            if(i%n==0 && i%m==0)
            {                                                  //approach1
                cout<<"LCM is "<<i;
                break;
            }
            j++;
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