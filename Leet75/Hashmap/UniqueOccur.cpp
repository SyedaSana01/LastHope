class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int x: arr){
            freq[x]++;
        }
        unordered_set<int> s;
        for(auto&p : freq){
            if(s.count(p.second))
            return false;
            s.insert(p.second);
        }
        return true;
        
        
    }
};