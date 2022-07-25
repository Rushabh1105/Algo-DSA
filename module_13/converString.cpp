#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    string str1=str;

    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }

    for(int i=0; i<str1.length(); i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            str1[i]+=32;
        }
    }

    cout<<str<<endl;
    cout<<str1<<endl;
}