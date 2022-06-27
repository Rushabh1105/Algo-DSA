#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    char operation;

    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    cout<<"Enter the operator"<<endl;
    cout<<"addition=>a \nsubtraction=>b \nmultiplication=>c \ndivision=>d \n";
    cout<<"squareRoot=>e \nsquare=>f \ncube=>g"<<endl;
    cin>>operation;

    switch (operation)
    {
    case 'a':
        cout<<a+b;
        break;
    case 'b':
        cout<<a-b;
        break;
    case 'c':
        cout<<a*b;
        break;
    case 'd':
        cout<<a/b;
        break;
    case 'e':
        cout<<sqrt(a)<<endl;
        cout<<sqrt(b)<<endl;
        break;
    case 'f':
        cout<<a*a<<endl;
        cout<<b*b<<endl;
        break;
    case 'g':
        cout<<pow(a,3)<<endl;
        cout<<pow(b,3)<<endl;
        break;
    default:
        cout<<"Wrong choice :(";
        break;
    }
}