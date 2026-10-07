class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int L = 0;
        int R = 0;
        unordered_map<char, int> seen;
        int ans = 0;
        while(R < n){
            if(seen.count(s[R])){
                L = max(L, seen[s[R]] + 1);
            }
            seen[s[R]] = R;
            ans = max(ans, R - L + 1);
            R++;
        }
        return ans;
    }
};