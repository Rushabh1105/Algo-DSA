#include<iostream>
using namespace std;

void record(int n,int a[]){
    if(n==1){
        cout<<1;
        return;
    }

    int ans=0;
    int mx=-1;

    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,a[i]);

    }

    cout<<ans<<endl;
    return;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size+1];
    arr[size] = -1;

    for(int i=0;i<size;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    record(size,arr);
    return 0;
}