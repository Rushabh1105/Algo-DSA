#include<iostream>
#include<climits>
using namespace std;
int main(){
    char arr[1000];
    cout<<"Enter the sentence: ";
    cin>>arr;
    int maxLen=0;
    int currLen=0;
    int i=0;
    bool flag=true;
    while (flag){
        
        if(arr[i]==' ' || arr[i]=='\0'){
            cout<<"hi"<<endl;
            if(currLen>maxLen){
                maxLen=currLen;
            }
            currLen=0;
        }else{
            currLen++;
        }
        if(arr[i]=='\0'){
            flag=false;
        }
        i++;
    }
    cout<<maxLen<<endl;
}