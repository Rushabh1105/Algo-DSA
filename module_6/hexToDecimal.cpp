#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std; 

hex_to_dec(string n){
    int ans = 0;
    int x=1;
    int s=n.size();

    for(int i=s-1;i>=0;i++){
        if(n[i]>='0' && n[i]<='9'){
            ans = ans + x*(n[i]-'0');
        }else if(n[i]>='A' && n[i]<='F'){
            ans += x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}

int main(){
    string n;
    cout<<"Enter a binary number: ";
    cin>>n;

    cout<<hex_to_dec(n)<<endl;

    return 0;
}