#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s1;
    cout<<"Enter a string: ";
    cin>>s1;

    sort(s1.begin(),s1.end());
    reverse(s1.begin(),s1.end());
    cout<<s1;
}