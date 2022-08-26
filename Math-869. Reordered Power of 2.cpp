class Solution {
public:
  /*the idea is we have all the digits that can be rearrange to be power of 2 then answer 
    is true. what we will do here just sort the num and generate all power of 2 in sorted
    order and if they get match then answer is true otherwise false
    */
    string getSorted(int n){
         string res=to_string(n);
         sort(res.begin(),res.end());
         return res;
    }
    bool reorderedPowerOf2(int n) {
        
          string res=getSorted(n);
          for(int i=0;i<=30;i++){
              
              string isPow=getSorted(1<<i);
              if(isPow==res) return true;
          }
          return false;
    }
};
