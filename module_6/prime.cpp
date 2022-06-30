#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int x){
    for(int j=2;j<=sqrt(x);j++){
        if(x%j==0){
            return false;
        }
    }
    return true;
}


int main()
{
    int num1,num2;
    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;

    for(int i=num1;i<=num2;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}

