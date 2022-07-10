#include<iostream>
#include<climits>
using namespace std;

void maxSum(int n,int a[]){
    int i=0;
    int j=0;
    int maxS=INT_MIN;
    
    while(i<n){
        if(j>=i){
            int sum=0;
            for(int k=i;k<=j;k++){
                //cout<<" "<<a[k];
                sum=sum+a[k];
            }
            //cout<<" Sum is: "<<sum;
            if(maxS<sum){
                maxS=sum;
            }
            j++;
            //cout<<"\n";
        }
        if(j==n){
            i++;
            j=i;
        }
    }

    cout<<"Maximum sum is: "<<maxS;
    return;
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    maxSum(n,arr);
    return 0;
}