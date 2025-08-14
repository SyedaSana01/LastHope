#include<bits/stdc++.h>
using namespace std;
int LCS(vector<int>&nums){
    int n=nums.size();
    int c=0,l=0;
    unordered_set<int>st;
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int x=0;
            x=1;
            c=1;
        while(st.find(x+1)!=st.end()){
             x=0;
            x=x+1;
            c=c+1; 

    }
    l=max(l,c);
    }
    return l;
}
}