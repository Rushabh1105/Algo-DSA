#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arrey[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element of array: ";
        cin>>arrey[i];
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    for(int i=0;i<size;i++){
        if(arrey[i]==key){
            cout<<"Found it: "<<key<<" At index "<<i<<endl;
            break;
        }
    }
}