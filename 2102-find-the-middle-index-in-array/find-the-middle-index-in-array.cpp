class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        long totalSum = 0;
        for(int i = 0; i < n; i++){
            totalSum += nums[i];
        }
        long left = 0;
        for(int i = 0; i < n; i++){
            long right = totalSum - nums[i] - left;
            if(left == right) return i;
            left += nums[i];
        }
        return -1;
    }
};