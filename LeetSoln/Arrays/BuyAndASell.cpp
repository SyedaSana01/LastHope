#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0,bestBuy=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxP=max(maxP,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        return maxP;
        

    }
};