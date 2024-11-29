class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int> memo = vector<int>(26, 0);
       for (char c: s) {
            memo[c - 'a'] += 1;
       }
       for (char c: t) {
            memo[c - 'a'] -= 1;
       }

       for (int i = 0; i < 26; i++) {
        if (memo[i] != 0) {
            return false;
        }
       }

       return true;
    }
};