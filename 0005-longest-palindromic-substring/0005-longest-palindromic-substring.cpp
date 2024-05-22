class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxl = 0, maxr = 0;
        for (int i = 0; i < n; i++) {
            int l, r;
            for (l = i, r = i; 0 <= l && r < n && s[l] == s[r]; l--, r++); 
            l++, r--;
            if (r - l > maxr - maxl) maxl = l, maxr = r;
            if (i < n - 1 && s[i] == s[i + 1]) for (l = i, r = i + 1; 
            0 <= l && r < n && s[l] == s[r]; l--, r++);
            l++, r--;
            if (r - l > maxr - maxl) maxl = l, maxr = r;
        }
        return s.substr(maxl, maxr - maxl + 1);
    }
};