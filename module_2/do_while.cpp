#include<iostream>
using namespace std;
int main(){
    int n = 0;
    
    int sum = 0;
    do{
        sum = sum + n;
        cout<<"Sum upto this is :"<<sum<<"\n";
        cout<<"Enter a number";
        cin>>n;
    } while (n > 0);
    {
        
    }
    return 0;
}