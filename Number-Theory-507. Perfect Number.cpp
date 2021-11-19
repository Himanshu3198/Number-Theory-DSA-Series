class Solution {
public:
    bool checkPerfectNumber(int num) {
             
        if(num==1)return num^num;
        
        int maxReach=sqrt(num);
        
        int sum=0;
        for(int i=2;i<=maxReach;i++){
            
            if(num%i==0){
                sum+=i+num/i;
            }
            
           
        }
        
        sum++;
        cout<<sum;
        return sum==num;
      
    }
};
