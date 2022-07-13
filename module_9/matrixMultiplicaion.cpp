#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3,n4;
    n1=3;
    n2=4;
    n3=4;
    n4=3;

    int arr1[n1][n2]={{2,4,1,2},{8,4,3,6},{1,7,9,5}};
    int arr2[n3][n4]={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
    

    int ans[n1][n4];

    int row1=0;
    int col1=0;
    int row2=0;
    int col2=0;

    while(row1!=n1){
        int a=0;
        for(int i=0;i<n2;i++){
            int p = arr1[row1][i]*arr2[i][col2];
            a += p;
        }
        ans[row1][col2]=a;
        //cout<<a<<" ";
        col2++;

        if(col2==n4){
            row1++;
            col2=0;
            //break;
        }
    }

    for(int i=0;i<n1;i++){
            for(int j=0;j<n4;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    
    return 0;
}