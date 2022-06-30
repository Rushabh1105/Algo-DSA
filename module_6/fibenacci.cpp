#include<iostream>
#include<math.h>
using namespace std;
int fib(int x){
    if(x==1){
        return 0;
    }
    if(x==2){
        return 1;
    }
    int res = (fib(x-1)+fib(x-2));
    
    return res;
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;

    cout<<fib(n);

    return 0;
}