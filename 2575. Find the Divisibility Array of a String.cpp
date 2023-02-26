class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        
        vector<int>res;
        long long int num=0;
        for(int i=0;i<word.size();i++){
            int x=word[i]-'0';
            num=(num*10+x)%m;
            if(num==0) res.push_back(1);
            else res.push_back(0);
        }
        return res;
    }
};
