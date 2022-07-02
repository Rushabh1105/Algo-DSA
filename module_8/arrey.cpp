#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size;

    cout<<"Enter size of array: ";
    cin>>size;
    int max=INT_MIN;

    int arrey[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element of array: ";
        cin>>arrey[i];
        if(i>0 && arrey[i]>max){
            max = arrey[i];
        }
    }

    for(int i=0;i<size;i++){
        cout<<arrey[i]<<endl;
    }
    cout<<"Maximum number is: "<<max<<endl;
    return 0;
}