#include<iostream>
using namespace std;

void bubble(int n,int arr[]){
    int counter = 1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
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

    bubble(size,arrey);
    return 0;
    
}