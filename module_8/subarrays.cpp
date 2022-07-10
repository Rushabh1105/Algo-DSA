#include<iostream>
using namespace std;

void subarr(int n, int a[]){
    int i=0;
    int j=0;
    
    while(i<n){
        if(j>=i){
            for(int k=i;k<=j;k++){
                cout<<" "<<a[k];
            }
            j++;
            cout<<"\n";
        }
        if(j==n){
            i++;
            j=i;
            cout<<"\n";
        }
    }
    return;
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    subarr(n,arr);
    return 0;
}