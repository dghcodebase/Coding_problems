#include<iostream>
using namespace std; 

int main()
{   
    char ch;
    cout<<"enter the character : ";
    cin>>ch;
    int ascii = (int)ch;
    
    if ( ( ascii>= 97 && ascii <=112 ) || ( ascii>=65 && ascii<=90 ) )
    {
        cout<<"It is a alphabet";
    }
    else
    {
        cout<<"its not a alphabet ";
    }
}
