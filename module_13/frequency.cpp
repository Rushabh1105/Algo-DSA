#include<iostream>
#include<string>
#include<climits>

using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int arr[26] = {0};

    for(int i=0; i<str.length(); i++){
        if(str[i] >='A' && str[i]<='Z'){
            arr[str[i]-65]++;
        }

        if(str[i]>='a' && str[i]<='z'){
            arr[str[i]-97]++;
        }
    }

    int maxi = INT_MIN;
    int index;

    for(int j=0; j<26; j++){
        if(arr[j] > maxi ){
            maxi=arr[j];
            index=j;
        }
    }

    char ans = index+65;
    cout<<maxi<<" "<<ans<<endl;
}