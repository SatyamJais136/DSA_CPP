class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int m = t.size();
        int n = s.size();
        if(s == "") return true;
        for(int j = 0; j < m; j++){
            if(s[i] == t[j]) i++;
            if(i == n) return true;
        }
    return false;
    }
};