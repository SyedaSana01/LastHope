#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>GA(string str){
    int n=str.size();
    unordered_map<string,vector<string>>mp;
    vector<vector<string>>res;
    string temp;
    for(int i=0;i<n;i++){
        temp=str[i];
        sort(str.begin(),str.end());
        mp[str].push_back(temp);


    }
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        res.push_back(itr->second);
    }
    return res;
}
