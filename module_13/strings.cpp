#include<iostream>
#include<string>
using namespace std;

int main(){
    //First way to declare string
    string str;
    cout<<"Enter string: ";
    cin>>str;
    cout<<str<<endl;

    //second way
    string str1(5,'p');
    cout<<str1<<endl;

    //third way
    string str2;
    getline(cin, str2);
    cout<<str2<<endl;
    
    return 0;
}