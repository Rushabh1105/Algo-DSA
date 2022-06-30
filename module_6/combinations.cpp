#include<iostream>
#include<math.h>
using namespace std;

int factorial(int x){
    if(x==0){
        return 1;
    }
    if(x==1){
        return 1;
    }
    return x*factorial(x-1);
}

int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;

    int a = factorial(n);
    int b = factorial(n-r);
    int c = factorial(r);

    float combinations = a/(b*c);

    cout<<combinations;

    return 0;
}