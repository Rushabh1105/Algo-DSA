//Floyd's Triangle

#include<iostream>
using namespace std;
int main(){
    int n,m;
    m = 1;

    cout<<"Enter the size of base :";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= i ){
                cout<<m;
                m++;
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}