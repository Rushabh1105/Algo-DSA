#include<iostream>
using namespace std;
int main(){
    int n;
    bool prime;
    cout<<"Enter a number :";
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){
            prime = false;
            break;
        }
        else{
            prime = true;
            continue;
        }
    }

    if(prime == true){
        cout<<"Prime number";
    } else {
        cout<<"Not prime";
    }
   
    return 0;
}