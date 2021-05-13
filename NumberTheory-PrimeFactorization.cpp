#include<bits/stdc++.h>
using namespace std;



void primeFactor(int n){


    while(n%2==0){

        cout<<2<<"\n";
        n=n/2;
    }


    for(int i=2;i<=(n);i=i+2){

         

        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>2){
        cout<<n<<" ";
    }
}
int main(){

    int n=12345;

    primeFactor(n);
    return 0;
}