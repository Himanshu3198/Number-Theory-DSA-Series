//  find the total number from 1 to n  which is divisble by a and b;
#include<bits/stdc++.h>
using namespace std;

int solve(int n,int a,int b){

    int c1=n/a;
     int c2=n/b;
     int c3=n/(a*b);

     return (c1+c2-c3);
}

int main(){


    int n=40,a=5,b=7;

      cout<<solve(n,a,b)<<"\n";
}