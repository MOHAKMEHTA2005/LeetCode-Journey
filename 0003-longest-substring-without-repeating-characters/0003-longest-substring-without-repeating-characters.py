class Solution(object):
    def lengthOfLongestSubstring(self, s):
        n = len(s)
        L = 0
        R = 0
        seen = {}
        ans = 0
        while R < n:
            if s[R] in seen:
                L = max(L, seen[s[R]] + 1)
            seen[s[R]] = R
            ans = max(ans, R - L + 1)

            R += 1

        return ans