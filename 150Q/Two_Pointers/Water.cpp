#include<bits/stdc++.h>
using namespace std;
int water(vector<int>&h){
    int i=0,j=h.size()-1;
    int res=0;
    while(i<j){
        int water = min(h[i],h[j])*(j-i);
        res=max(res,water);
        if(h[i]<h[j]){
            i++;
        }else{
            j--;
        }

    }
    return res;

    
}
