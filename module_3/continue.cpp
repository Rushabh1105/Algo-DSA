#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter a number :";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if(i%2==0 || i%3==0 || i%5==0){
            continue;
        }
        else{
            cout<<i<<"\n";
        }
    }
    return 0;
}