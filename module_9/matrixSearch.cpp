//Rows & Columns are sorted here

#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    int n=15;
    bool flag;
    int r=0;
    int c=3;

    while(r<4 && c>=0){
        if(arr[r][c]==n){
            flag=true;
            break;
        }else if(arr[r][c]>n){
            c--;
        }else if(arr[r][c]<n){
            r++;
        }else{
            flag = false;
        }
    }

    if (flag==true)
    {
        cout<<"Present";
    }else{
        cout<<"Absent";
    }
    
}