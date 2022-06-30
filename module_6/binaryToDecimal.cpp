#include<iostream>
#include<math.h>
using namespace std; 

int binary_to_deciamal(int x){
    int ans = 0;
    int y = 1;

    while(x>0){
        int rem = x%10;
        ans = ans + y*rem;
        y = y*2;
        x = x/10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    cout<<binary_to_deciamal(n)<<endl;

    return 0;
}