class Solution {
public:
void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& finalAns, int idx){
        finalAns.push_back(ans);
        for(int i = idx; i < nums.size(); i++){
            //skip duplicates
            if(i > idx && nums[i] == nums[i-1]) continue;
            ans.push_back(nums[i]);
            helper(nums, ans, finalAns, i+1);
            ans.pop_back();
        }
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // sort for handeling duplicates
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(nums, ans, finalAns, 0);
        return finalAns;
    }
};