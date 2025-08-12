#include<bits/stdc++.h>
using namespace std;
int Threesum(vector<int>nums,int val){
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int i=0,j=i+1,k=n-1;

    for(int i=0;i<n;i++){
        int sum=nums[i]+nums[j]+nums[k];
        vector<vector<int>> ans;
        while(j<k){
            if(sum<0){
                i++;
            }else if(sum>0){
                k--;
            }
            else{
                vector<int>temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                 while(j<k && nums[k]==nums[k-1]) j++;


            }
            

        
    }
  
}


}