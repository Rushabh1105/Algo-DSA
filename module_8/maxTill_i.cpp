#include<iostream>
#include<limits.h>
#include<string.h>

using namespace std;
int main(){
    int arr[1000];
    bool condn = true;
    int max=INT_MIN;
    int i=0;
    
    while(condn){
        cout<<"Enter the element: ";
        cin>>arr[i];
        if(cin.fail()){
            condn=false;
            break;
        }

        if(arr[i]>max){
            max=arr[i];
        }
        cout<<"Maximum till is: "<<max<<endl;
        
        i++;
    }

    return 0;

}