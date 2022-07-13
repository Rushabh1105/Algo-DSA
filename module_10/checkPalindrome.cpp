#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    char arr[n+1];
    cout<<"Enter character of array: ";
    cin>>arr;
    bool flag;
    int j=0;
    while(arr[j]!='\0'){
        j++;
    }
    int i=0;
    while(j>i){
        if(arr[i]!=arr[j-1]){
            flag=false;
            break;
        }else{
            flag = true;
        }
        i++;
        j--;
    }
    
    if(flag==true){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }


}