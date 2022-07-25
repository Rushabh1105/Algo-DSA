#include<iostream> 
using namespace std;
int main()
{
    int a=2;
    int *aptr = &a;

    cout<<&a<<endl; 
    cout<<aptr<<endl;
    cout<<&aptr<<endl;
    cout<<*aptr<<endl;
    cout<<++aptr<<endl;

    int arr[] = {1,2,3,4,5,6,7,8,9};

    for(int i=0;i<9;i++){
        cout<<*(arr+i)<<endl;
    }
    cout<<*arr;
}