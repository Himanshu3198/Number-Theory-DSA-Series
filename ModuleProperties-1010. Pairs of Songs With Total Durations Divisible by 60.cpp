class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
           int count=0;
           
           vector<int>rem(61,0);
        
        
        for(int i=0;i<time.size();i++){
       
             if(time[i]%60==0){
                 count+=rem[time[i]%60];
             }else{
                 count+=rem[60-time[i]%60];
             }
            rem[time[i]%60]++;
        }
        
        return count;
    }
};
