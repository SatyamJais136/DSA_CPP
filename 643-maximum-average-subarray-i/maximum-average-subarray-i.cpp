class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        double ans = sum;
        int i = 0, j = k;
        while(j < n){
            sum += nums[j] - nums[i];
            ans = max(ans,sum);
            i++;
            j++;
        }
        return ans/k;
    }
};