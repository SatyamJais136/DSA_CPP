class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        // 1) Find pivot index
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        if(idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // 2) Find the rightmost element greater than nums[idx]
        int j = -1;
        for(int i = n - 1; i > idx; i--) {
            if(nums[i] > nums[idx]) {
                j = i;
                break;
            }
        }

        // 3) Swap nums[idx] and nums[j]
        swap(nums[idx], nums[j]);

        // 4) Reverse the suffix
        reverse(nums.begin() + idx + 1, nums.end());
    }
};