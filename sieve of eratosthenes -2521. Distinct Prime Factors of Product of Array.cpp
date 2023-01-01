class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int m=1001;
        vector<bool>prime(m,false);
        for(int i=2;i<=m;i++)
            if(prime[i]==false)
                for(int j=i*i;j<=m;j+=i) prime[j]=true;
        
       set<int>st;
       for(int i=0;i<nums.size();i++)
           for(int j=2;j<=nums[i];j++)
               if(prime[j]==false && nums[i]%j==0)  st.insert(j);
       
       return st.size();
            
        
    }
};
