class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt=0;
        int currAlt=0;

        for(int g: gain){
            currAlt+=g;
            maxAlt=max(maxAlt,currAlt);

        }
        return maxAlt;
        
    }
};