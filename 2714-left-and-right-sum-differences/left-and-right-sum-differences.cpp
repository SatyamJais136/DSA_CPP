class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,0), leftSum(n,0), rightSum(n,0);
        // calculate the left sum
        for(int i = 1; i < n; i++){
            leftSum[i] = leftSum[i-1] + nums[i-1];
        }
        // calculate the right sum
        for(int i = n-2; i >= 0; i--){
            rightSum[i] = rightSum[i+1] + nums[i+1];
        }
        // difference vector
        for(int i = 0; i < n; i++){
            v[i] = abs(leftSum[i] - rightSum[i]);
        }
        return v;
    }
};