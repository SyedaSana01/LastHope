#include<bits/stdc++.h>
using namespace std;
bool canJump(vector<int>nums){
    int maxI=0;
    for(int i=0;i<nums.size();i++){
        if(i>maxI) return false;
        maxI =max(maxI,i+nums[i]);
    }
    return true;
}