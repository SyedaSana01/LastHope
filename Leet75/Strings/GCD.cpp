class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // Check if concatenation is equal in both orders
        if (str1 + str2 != str2 + str1) return "";

        // GCD of lengths gives the answer
        int gcdLen = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLen);
    }
};
