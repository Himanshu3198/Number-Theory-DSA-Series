//  Euclid Algorithm for gcd of two numbers
#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){

    while(b!=0){
        int rem=a%b;

        a=b;
        b=rem;
    }

    return a;
}

int main()
{

    int t=1;
    // cin >> t;
    while (t--)
    {
        int a=42,b=24;
        // cin >> n;

       cout<< gcd(a,b)<<"\n";

    
    }
}
