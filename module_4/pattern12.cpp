//Palindrome Pattern

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of base :";
    cin>>n;
    int x = 1;

    for(int i=n; i>=1; i--){
        for(int j=1;j<i;j++){
            cout<<"**";
        }
        for(int k=x; k>=1;k--){
            cout<<k;
            cout<<" ";
        }
        for(int l=2; l<=x;l++){
            cout<<l;
            cout<<" ";
        }
        x++;
        cout<<endl;
    }
    return 0;
}