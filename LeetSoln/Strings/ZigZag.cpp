class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s; // Special case
        
        int n = s.length();
        string res = "";

        for(int row = 0; row < numRows; row++) {
            int i = row;
            bool up = true;

            while(i < n) {
                res += s[i];  //  add character to result

                if(row == 0 || row == numRows-1) {
                    // first/last row → always same jump
                    i += 2*numRows - 2;
                } else {
                    // middle rows → alternate jumps
                    if(up) {
                        i += 2*(numRows - row - 1);
                    } else {
                        i += 2*row;
                    }
                    up = !up;  // toggle
                }
            }
        }
        return res;
    }
};
