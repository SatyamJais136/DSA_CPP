class Solution {
public:
    void generate(vector<string>& res, string s, int n){
        if(s.length() == n){
            res.push_back(s);
            return;
        }
        generate(res, s+'1',n);
        if(s == "" || s[s.length()-1] == '1') generate(res, s+'0', n);
    }

    vector<string> validStrings(int n) {
        vector<string> res;
        generate(res, "",n);
        return res;
    }
};