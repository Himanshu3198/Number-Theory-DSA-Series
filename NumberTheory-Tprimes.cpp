
#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;


        //  ll count=0;

        ll ans=sqrt(n);




           ll i;
         for(i=2;i*i<ans;i++){


             if(n%i==0){
                 break;
             }

            
         }

        //   cout<<count<<"\n";


         if(i*i>ans and ans*ans==n and n>1){
           
              cout<<"YES"<<"\n";

         }
         else{
            cout<<"NO"<<"\n";
         }

      
    }
    return 0;
}
