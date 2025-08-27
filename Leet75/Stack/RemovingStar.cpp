
IN this problem you have to remove stars and the characters left to the stars




class Solution {
public:
    string removeStars(string s) {
        string res="";
        for(char c:s){
            if(c=='*'){
                res.pop_back();
            }else{
                res.push_back(c);
            }
        }
        return res;
        
    }

};
