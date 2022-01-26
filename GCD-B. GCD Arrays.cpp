
/*
 author:himanshu3198
 https://codeforces.com/contest/1629/problem/B

*/
#include <bits/stdc++.h>
#define ll long long int
#define fr(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, n) for (int i = (n); i >= 0; i--)
#define fst first
#define snd second
#define E "\n"
#define pb push_backCF
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define setbits(x) __builtin_popcount(x)
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

void solve()
{
   
   

     ll l,r,k;
     cin>>l>>r>>k;

    
  

    if(l==r){

        if(l>1){
            puts("YES");
            
        }else{
            puts("NO");
        }
        return;
    }
      
   // find odd number effectively

     ll n=r-l+1;

     ll odd=(r-l)/2;

     if(r%2!=0 or l%2!=0){
         odd+=1;
     }
     ll even=n-odd;

      


     if(odd<=k){
         puts("YES");
     }else{
         puts("NO");
     }



}


int main()
{
    fastio();
    int t = 1;
    cin >> t;

    while (t--)
    {

        solve();
    }

    return 0;
}
