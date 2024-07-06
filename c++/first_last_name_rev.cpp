
#include <iostream>
using namespace std;
class name
{  
public:    
   void input()
   {
       string fname,lname;
    cout<<"enter your first and last name : ";
    cin>>fname>>lname;
    int a=fname.length();
    int b=lname.length();
    for(int j=(b-1);j>=0;j--)
    {
        cout<<lname[j]<<" ";
    }
    cout<<" ";
    for(int i=(a-1);i>=0;i--)
    {
       cout<<fname[i]<<" "; 
    }
    
    
   }
    
};
int main() 
{  
   name obj;
   obj.input();
}
