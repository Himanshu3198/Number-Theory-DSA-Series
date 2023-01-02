
#define ll long long int
class Solution
{
    public:
        vector<int> closestPrimes(int left, int right)
        {

            vector<ll> prime;
            int n = right + 1;

            vector<bool> isPrime(n, false);
            for (ll i = 2; i <= n; i++)
                if (isPrime[i] == false)
                    for (ll j = i * i; j <= n; j += i)
                        isPrime[j] = true;
            isPrime[1] = true;
            for (ll i = left; i <= right; i++)
                if (!isPrime[i]) prime.push_back(i);
           	// for(int i=left;i<=right;i++) cout<<isPrime[i]<<" ";
            ll minDiff = INT_MAX;
            vector<ll> ans = { -1,-1 };

            for (ll i = 0; i < prime.size(); i++)
            {
                if (i + 1 < prime.size())
                {
                    ll currDiff = prime[i + 1] - prime[i];
                    if (currDiff < minDiff)
                    {
                        minDiff = currDiff;
                        ans = { prime[i],
                            prime[i + 1]
                        };
                    }
                }
            }
            vector<int> res(2);
            res[0] = int(ans[0]);
            res[1] = int(ans[1]);
            return res;
        }
};
