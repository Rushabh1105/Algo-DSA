#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    int i=0;
    int j=0;

    while(i!=size){
        for(int k=i;k<=j;k++){
            cout<<arr[k];
        }
        cout<<endl;

        j++;
        if(j==size){
            ++i;
            j=i;
        }
    }

}