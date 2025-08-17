#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        unordered_set<int> st(nums.begin(), nums.end());  
        int len = 0;

        for(auto it : st) {
            
            if(st.find(it - 1) == st.end()) {
                int x = it;
                int cnt = 1;

               
                while(st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt = cnt + 1;
                }

                len = max(len, cnt);
            }
        }
        return len;
    }
};