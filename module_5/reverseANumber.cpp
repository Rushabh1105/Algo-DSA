#include<iostream>
using namespace std;
int main()
{
    int num,rem;
    int sum = 0;
    cout<<"Enter a number :";
    cin>>num;

    while(num > 0){
        rem = num%10;
        sum = 10*sum + rem;
        num = num/10;
    }

    cout<<"Reverse number is "<<sum<<endl;
}