class Solution {
public:
    string reverseVowels(string s) {
        auto isVowel = [](char c) {
            c = tolower(c);
            return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
        };

        int left = 0, right = s.size() - 1;

        while (left < right) {
            // Move left pointer until it finds a vowel
            while (left < right && !isVowel(s[left])) left++;
            // Move right pointer until it finds a vowel
            while (left < right && !isVowel(s[right])) right--;

            // Swap vowels
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};
