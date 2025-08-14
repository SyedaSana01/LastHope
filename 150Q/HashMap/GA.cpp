#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>GA(vector<string>& s){
    int n=s.size();
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>mp;
    for(int i=0;i<n;i++){
        string 
        temp=s[i];
        sort(s[i].begin(),s[i].end());
        mp[s[i]].push_back(temp);  
    }
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        ans.push_back(itr->second);

    }
    return ans;

}