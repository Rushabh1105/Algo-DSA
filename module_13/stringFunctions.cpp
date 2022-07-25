#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    //Append function
    string s1="Hello ";
    string s2="Darling ";
    s1.append(s2);
    cout<<s1<<endl;

    //Join 
    cout<<s1+s2<<endl;

    //clear
    string s3="dkjjfnweiufwnfwnfiuwnfiwrfiwndkkafiwaebflawibfliasbf";
    s3.clear();
    cout<<"-->"<< s3 << endl;

    //Compare two strings
    cout<<s2.compare(s1) << endl;

    //Empty function
    if(s3.empty()){
        cout<<"Yes its empty "<< endl;
    }

    //Erase function
    string s4 = "nincompoop";
    s4.erase(3,2);
    cout<< s4<< endl;

    //Size function
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;

    //Substring of string
    string s5="Dell Inspiron";
    string s6=s5.substr(4,5);
    cout<<s6<<endl;

    //Convert string to integer
    string s7="123456789";
    int x=stoi(s7);
    cout<<x+1<<endl;

    //Sort the string {Lexicographically}
    string s8="sdfsdfwadfggoop";
    sort(s8.begin(),s8.end());
    cout<<s8<<endl;

    transform(s8.begin(),s8.end(),s8.begin(), ::toupper);
    cout<<s8;

    return 0;
}