#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,rem;
    int sum = 0;
    cout<<"Enter a number :";
    cin>>num;
    int verify = num;

    while(num!=0)
    {
        rem = num%10;
        sum = sum + pow(rem,3);
        num = num/10;
    }

    if(sum == verify){
        cout<<"Armstrong Number"<<endl;
    }else{
        cout<<"Not Armstrong Number";
    }
    
}