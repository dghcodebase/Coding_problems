#include<iostream>
using namespace std; 

int main()
{   
   int n;
   cout<<"enter the integer:";
   cin>>n;
   
   if ( n%5==0 )
   {
      if ( n%3==0 )
      {
          cout<<"number is divisble by 5 and 3";
      }
      else
      {
          cout<<"not matching the condition";
      }
   }
   else
   {
       cout<<"not matching condition";
   }
  
  
}

//   if ( ( n%5==0 ) && ( n%3==0 ) )
//   {
//       cout<<"number is divisble by 5 and 3 ";
//   }
//   else
//   {
//       cout<<"not matching condition";
//   }
