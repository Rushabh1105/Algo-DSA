#include<iostream>
using namespace std;

void insertion(int n,int arr[]){
    for(int i=0;i<n;i++){
        int current=arr[i];
        int j=i-1;

        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
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

    insertion(size,arrey);
    return 0;
}