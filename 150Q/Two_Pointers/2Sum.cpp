#include<bits/stdc++.h>
using namespace std;
vector<int>sum(vector<int>&nums, int t){
    int n=nums.size()-1;
    int i=0,j=n-1;
    vector<int>ans;
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum==t){
            ans.push_back(i+1);
        ans.push_back(j+1);
        }

        else if (sum<t){
            i++;
        }else{
            j--;
        }

        
    }
    return ans;
    
}

