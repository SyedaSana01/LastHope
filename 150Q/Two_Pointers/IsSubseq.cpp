#include<bits/stdc++.h>
using namespace std;
bool Sub(string s,string t){
    int m=s.length();
    int n=t.length();
    int i=0,j=n;
    if(m>n) return false;

    while(m<n){
        
        if(s[i]==t[j]){
            i++,j++;
        }

    }
    return i==m;

}