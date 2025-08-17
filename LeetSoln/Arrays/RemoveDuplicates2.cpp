#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=2;
        if(nums.size()==1) return 1;
        for(int j=2;j<nums.size();j++){
            if(nums[j]!=nums[i-2]){
                nums[i++]=nums[j];
            }
        }
        return i;
        
    }
};