#include<iostream>
#include<climits>
using namespace std;

int kadane(int n,int a[]){
    int maxS=INT_MIN;
    int currentSum=0;


    for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxS=max(maxS,currentSum);
    }
    
    return maxS;
}

void maxSumCircle(int n, int a[]){
    int wrapsum;
    int totalsum=0;
    int nonwrapsum=kadane(n,a);

    for(int i=0;i<n;i++){
        a[i]=-a[i];
        totalsum+=a[i];
    }

    wrapsum = totalsum + kadane(n,a);
    cout<<max(wrapsum,nonwrapsum);
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

    maxSumCircle(n,arr);
    return 0;
}