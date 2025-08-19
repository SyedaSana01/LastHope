#include<bits/stdc++.h>
using namespace std;
int Majority(vector<int>&nums,int n){
    int cnt=0,el=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];

        }else if(nums[i]==el){
            cnt++;
        }else{
            cnt--;
        }
       if(cnt>n/2){
        return el;
       } 
        
    }
}