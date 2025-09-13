class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,maxlen=0;
        unordered_map<char,int>count;
        for(right=0;right<s.length();right++){
            char c=s[right];
            count[c]++;
            while(count[c]>1){
                char lastcount=s[left];
                 count[lastcount]--;
                left++;
            }
             maxlen=max(maxlen,right-left+1); 
           
        }
          return maxlen;
    }
};
        
        
    
   