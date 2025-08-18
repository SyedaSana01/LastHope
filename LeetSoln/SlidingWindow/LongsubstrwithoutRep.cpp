#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int l=0,r=0,maxlen=0;
    unordered_map<char,int>count;
    for(r=0;r<s.length();r++){
        char c=s[r];
        count[c]=count[c]+1;
        while(count[c]>1){
            char lc=s[l];
            count[lc]=count[lc]-1;
          
            l++;
        }
       maxlen =max(maxlen,r-l+1);


    }
     return maxlen;
   
}
        
    
};