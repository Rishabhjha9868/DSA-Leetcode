class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if(s.length()!=t.length()) return false;
        for(int i=0 ; i<s.length(); i++){
            char st = s[i];
            char tt = t[i];

            for(int j = 0; j<s.length();j++){
                if(s[j]==st && t[j]!=tt) return false;
                if(t[j]==tt && s[j]!=st) return false;
            }
        }
        return true;
    }
};