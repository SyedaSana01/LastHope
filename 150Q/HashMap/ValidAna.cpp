#include<bits/stdc++.h>
using namespace std;
bool VA(string s, string t){
    int m=s.length();
    int n=t.length();
    unordered_map<char,int>count;
    
    if(m<n) return false;
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
        
    }
    for(int i=0;i<t.length();i++){
        count[t[i] -'a']--;
    }
    for(auto &pair:count){
        if(pair.second!=0){
            return false;
        }
    }
    return true;



}