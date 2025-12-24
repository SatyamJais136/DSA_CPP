class Solution {
public:
bool isValid(char c){
if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9') return true;
     else return false;
}

char toLower(char c){
    if(c >= 'A' && c <= 'Z'){
        return (c - 'A' + 'a');
    }
    return c;
}

    bool isPalindrome(string s) {
        string temp1;
        string temp2;
        for(int i = 0; i < s.size(); i++){
            if(isValid(s[i])){
                temp1 += s[i];
            }
        }
        for(int i = 0; i < temp1.size(); i++){
            temp2 += toLower(temp1[i]);
        }
        int i = 0;
        int j = temp2.length()-1;
        while(i <= j){
            if((temp2[i]) != temp2[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};