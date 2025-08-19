#include<bits/stdc++.h>
using namespace std;
int Rotate(vector<int>arr,int k){
    int n=arr.size();
    for(int i=0;i<k;i++){
        vector<int>temp(k);
        temp[i]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];

    }
    for(int i=n-k;i<k;i++){
        arr[i]=arr[i-n+k];
    }
}