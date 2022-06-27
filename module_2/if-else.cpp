#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Number 1 :";
    cin>>a;
    cout<<"Enter Number 2 :";
    cin>> b;
    cout<<"Enter Number 3 :";
    cin>>c;

    if (a > b )
    {
        if( a > c )
        {
            cout<<"Maximum is "<<a;
        }
        else
        {
            cout<<"Maximum is "<<c;
        }
    }
    else if (b>c)
    {
        cout<<"Maximum is "<<b;
    }
    else
    {
        cout<<"Maximum is "<<c;
    }
    
    return 0;
}