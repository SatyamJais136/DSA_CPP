class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pre(n,1), suff(n,1);
        vector<int> res(n,1);
        // calculate preftix product
        for(int i = 1; i < n; i++){
            pre[i] = pre[i-1] * nums[i-1];
        }
        // calculate preftix product
        for(int i = n-2; i >= 0; i--){
            suff[i] = suff[i+1] * nums[i+1];
        }
        // fill the products into vector
        for(int i = 0; i < n; i++){
            res[i] = pre[i] * suff[i];
        }
        return res;
    }
};