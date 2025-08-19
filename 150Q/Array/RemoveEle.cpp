#include<bits/stdc++.h>
using namespace std;
int re(vector<int>&nums,int n){
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=n){
           nums[i++]=nums[j];

        }
    }
    return i;
}