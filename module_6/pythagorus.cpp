#include<iostream>
#include<math.h>
using namespace std; 

bool pythagorus(int a, int b, int c){
    if(a*a==b*b+c*c){
        return true;
    }else{
        return false;
    }
}

int max(int a,int b, int c){
    bool res;
    if(a>b){
        if(a>c){
            res = pythagorus(a,b,c);
        }else{
            res = pythagorus(c,a,b);
        }
    }else if(b>c){
        res = pythagorus(b,a,c);
    }else{
        res = pythagorus(c,a,b);
    }
    return res;
}

int main(){
    int x,y,z;
    cout<<"Enter the triplets: ";
    cin>>x;
    cout<<"Enter the triplets: ";
    cin>>y;
    cout<<"Enter the triplets: ";
    cin>>z;

    if(max(x,y,z)){
        cout<<"Pythagorus triplet";
    }else{
        cout<<"Not pythagorus triplet";
    }
    return 0;
}