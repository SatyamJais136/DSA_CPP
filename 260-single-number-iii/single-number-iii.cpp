class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(int i = 0; i < n; i++) res = res^nums[i];
        int k = 0;
        while(((res >> k) & 1) == 0) k++;

        int retval = 0;
        for(int i = 0; i < n; i++){
            int num = nums[i];
            if(((num >> k) & 1) == 1) retval ^= num;
        }
        int other = res^retval;
        vector<int> ans;
        ans.push_back(retval);
        ans.push_back(other);
        return ans;
    }
};