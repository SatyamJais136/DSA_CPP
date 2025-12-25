class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        long totalSum = 0;
        for(int i = 0; i < n; i++){ // total sum of array
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