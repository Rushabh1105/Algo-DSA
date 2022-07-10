//Kadanes Algorithm

#include<iostream>
#include<climits>
using namespace std;

void maxSum(int n,int a[]){
    int maxS=INT_MIN;
    int currentSum=0;

    for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxS=max(maxS,currentSum);
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
