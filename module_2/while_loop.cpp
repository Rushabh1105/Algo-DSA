#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter first number ";
    cin>>n;
    int sum = 0;
    while(n > 0){
        sum = sum + n;
        cout<<"Sum upto this is :"<<sum<<"\n";
        cout<<"Enter a number";
        cin>>n;
    }
    return 0;
}