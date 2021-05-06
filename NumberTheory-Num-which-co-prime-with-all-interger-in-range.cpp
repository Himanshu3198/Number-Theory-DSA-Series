 
#include <bits/stdc++.h>
using namespace std;
 

bool isPrime(int N)
{
    // Base Case
    if (N == 1)
        return false;
 
    for (int i = 2; i * i <= N; i++) {
 
        // If N has more than one
        // factor, then return false
        if (N % i == 0)
            return false;
    }
 
    // Otherwise, return true
    return true;
}
 
// Function to find X which is co-prime
// with the integers from the range [L, R]
int findCoPrime(int L, int R)
{
    // Store the resultant number
    int coPrime;
 
    // Check for prime integers
    // greater than R
    for (int i = R + 1;; i++) {
 
        // If the current number is
        // prime, then update coPrime
        // and break out of loop
        if (isPrime(i)) {
            coPrime = i;
            break;
        }
    }
 
    // Print the resultant number
    return coPrime;
}
 
// Driver Code
int main()
{
    int L = 16, R = 17;
    cout << findCoPrime(L, R);
 
    return 0;
}