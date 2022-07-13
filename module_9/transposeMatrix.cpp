#include<iostream>
using namespace std;



int main(){
    int n;
    cout<<"Enter rows/colums of array: ";
    cin>>n;

    int arr[n][n];
    cout<<"Enter element of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int ans[n][n];

    int row=0,col=0;

    while(row<n){
        ans[col][row]=arr[row][col];
        col++;
        if(col==n){
            row++;
            col=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

}