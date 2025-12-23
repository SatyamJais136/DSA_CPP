class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string str = countAndSay(n-1);
        string s = "";
        int freq = 1;
        for(int i = 1; i <= str.size(); i++){
            if(i < str.size() && str[i] == str[i-1]) freq++;
            else{
                s += to_string(freq) + str[i-1];
                freq = 1;
            }
        }
        return s;
    }
};
