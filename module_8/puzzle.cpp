#include<iostream>

using namespace std;

int main(){
    int RS;
    cout<<"Enter the amount: ";
    cin>>RS;

    int choc,wrap;
    bool loop = true;
    int initialChocolate=RS;
    wrap=RS;
    choc=0;

    while(loop){
        if(choc>0 || wrap >3){
            wrap=wrap+choc;

            if(wrap<3){
                loop=false;
            }

            choc=wrap/3;
            initialChocolate = initialChocolate + choc;
            wrap=wrap%3;
        }
    } 

    cout<<initialChocolate<<endl;
}