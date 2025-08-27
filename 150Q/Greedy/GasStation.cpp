#include<bits/stdc++.h>
using namespace std;
int gas(vector<int>gas,vector<int>cost){
    int totalGas=0,totalCost=0;
    int CurrGas=0,start=0;
    for(int val:gas){
        totalGas+=val;
    }
    for(int val:cost){
        totalCost+=val;

    }
    if(totalGas<totalGas) return -1;

    for(int i=0;i<gas.size();i++){
        CurrGas+=gas[i]-cost[i];
        if(CurrGas<0)[
            start=i+1;
            Currgas=0;
        ]
    
    }
    return start;

}

To find the amount of gas value 
