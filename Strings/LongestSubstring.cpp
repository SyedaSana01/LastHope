#include<bits/stdc++.h>
using namespace std;
int func(string s){
    int len=0,maxlen=0,l=0,r=0;
    int n=s.length();
    int Hash[256];
    while(r<n){
        if(Hash[s[r]]!=-1){
            if(Hash[s[r]]>=l){
                l=Hash[s[r]]+1;

            }
            len=r-l+1;
            maxlen=max(len,maxlen);
            Hash[s[r]]=r;
            r++;
        }
    }
    return maxlen;

}

