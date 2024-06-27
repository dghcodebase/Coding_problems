
#include<iostream>
using namespace std; 

int main()
{
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    int ascii=(int)ch;
    
    if( ascii>=65 && ascii<=122 )
    {
        
        if ( ch=='a' || ch=='A' )
        {
            cout<<"Vowel";
        }
        else if ( ch=='e' || ch=='E' )
        {
            cout<<"vowel";
        }
         else if ( ch=='i' || ch=='I' )
        {
            cout<<"vowel";
        }
         else if ( ch=='o'  || ch=='O' )
        {
            cout<<"vowel";
        }
         else if ( ch=='u' || ch=='U' )
        {
            cout<<"vowel";
        }
        else 
        {
            cout<<"consonant";
        }
    }    
    else 
    {
        cout<<"enter a valid character";
    }
    
}