#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
        string temp;
        for(int i=0;i<n;i++){
            temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            res.push_back(itr->second);
        }
        return res;

    }
};