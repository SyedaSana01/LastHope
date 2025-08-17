#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int el=0,cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }else if(el==nums[i]){
                cnt++;
            }else{
                cnt--;
            }
            if(cnt>n/2) return el;
            
        }
        return el;
        
        
    }
};