#include<iostream>
using namespace std;

void subarray(int a[],int n){
    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int current=2;

    while(j<n){
        if(pd==a[j]-a[j-1]){
            current++;
        }else{
            pd=a[j]-a[j-1];
            current=2;
        }

        ans=max(ans,current);

        j++;
    }

    cout<<ans;
    return;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    subarray(arr,size);
    return 0;
}