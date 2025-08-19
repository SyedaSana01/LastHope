#include<bits/stdc++.h>
using namespace std;
int RDE(vector<int>&nums, int n){
    int i=2;
    for(int j=2;j<n;j++){
        if(nums[j]!=nums[i-2]){
            nums[i++]=nums[j];
        }
    }
    return i;
}