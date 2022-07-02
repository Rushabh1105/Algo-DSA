#include<iostream>

using namespace std;

void selection(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }
    return;
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arrey[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element of array: ";
        cin>>arrey[i];
    }

    selection(arrey,size);

    return 0;
}