class Solution {
public:
void helper(int n, int k, int idx, vector<int>&ans, vector<vector<int>>& finalAns){
    if(ans.size() == k){
    finalAns.push_back(ans);
    return;
    }
    if(idx > n) return;   
    if(ans.size() + (n-idx+1) < k) return;
    helper(n,k,idx+1,ans,finalAns);
    ans.push_back(idx);
    helper(n,k,idx+1,ans,finalAns);
    ans.pop_back();
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(n, k, 1, ans, finalAns);
        return finalAns;
    }
};