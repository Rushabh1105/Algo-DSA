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

int combination(int n,int r){
    
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main()
{
    int n;
    cout<<"ENter N: ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<combination(i,j);
            }
            
        }
        cout<<endl;
    }    
}
