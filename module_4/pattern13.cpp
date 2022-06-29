//Star Pattern

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of base :";
    cin>>n;
    int x =1;

    for(int i=n; i>=1; i--){
        for(int j=1;j<i;j++){
            cout<<"__";
        }
        for(int k=x; k>=1;k--){
            cout<<"*";
            cout<<"_";
        }
        for(int l=2; l<=x;l++){
            cout<<"*";
            cout<<"_";
        }
        x++;
        cout<<endl;
    }
    x--;

    for(int i=1; i<=n; i++){
        for(int j=1;j<i;j++){
            cout<<"__";
        }
        for(int k=1; k<=x;k++){
            cout<<"*";
            cout<<"_";
        }
        for(int l=x; l>1;l--){
            cout<<"*";
            cout<<"_";
        }
        x--;
        cout<<endl;
    }
}