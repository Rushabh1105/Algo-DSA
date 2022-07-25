#include<iostream>
using namespace std;

void swop(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=2,b=4;

    swop(&a,&b);

    cout<<a<<" "<<b<<endl;
}