#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter rows of array: ";
    cin>>n;
    cout<<"Enter coumns of array: ";
    cin>>m;

    int arr[n][m];
    cout<<"Enter element of array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int colStart=0;
    int colEnd=m-1;
    int rowStart=0;
    int rowEnd=n-1;

    while(rowStart<=rowEnd || colStart<=colEnd){
        //For printing the starting rows
        for(int col=colStart;col<=colEnd;col++){
            cout<<arr[rowStart][col]<<" ";
        }
        rowStart++;
        cout<<"\n";

        //for printing the ending columns
        for(int row=rowStart;row<=rowEnd;row++){
            cout<<arr[row][colEnd]<<" ";
        }
        colEnd--;
        cout<<"\n";

        //for printing the ending rows
        for(int col=colEnd;col>=colStart;col--){
            cout<<arr[rowEnd][col]<<" ";
        }
        rowEnd--;
        cout<<"\n";

        //for printing the starting column
        for(int row=rowEnd;row>=rowStart;row--){
            cout<<arr[row][colStart]<<" ";
        }
        colStart++;
        cout<<"\n";
    }

    return 0;
}