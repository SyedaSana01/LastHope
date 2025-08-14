#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>Sum(vector<int>&arr){
    int n=arr.size()-1;
    int i=0,j=i+1,k=n;
    sort(arr.begin(),arr.end());
    int sum=arr[i]+arr[j]+arr[k];
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
    while(i<j){
        if(sum<0){
            j++;
        }else if(sum>0){
            k--;
        }else{
            vector<int>temp={arr[i],arr[j],arr[k]};
            ans.push_back(temp);
            j++,k--;
        }
    
    }
    while(j<k && arr[j]==arr[j-1]) j++;
    while(j<k && arr[k]==arr[k+1]) k++;
}
return ans;
}