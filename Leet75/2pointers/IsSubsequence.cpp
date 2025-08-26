class Solution {
public:
    bool isSubsequence(string s, string t) {
        size_t pos = 0;
        for (char c : s) {
            pos = t.find(c, pos);
            if (pos == string::npos) return false;
            ++pos;
        }
        return true;
    }

};


Or you can also try 


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();

        int i=0,j=0;
        if(m>n) return false;

        while(i<m && j<n){
            
              if(s[i]==t[j]) 
            {
                i++;
                j++;
            }
            j++;
        }

        return i==m;
              
        
    }
};
