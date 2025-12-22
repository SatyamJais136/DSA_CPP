class Solution {
public:
int gcd(int a, int b){
    if(a == 0) return b;
    else return gcd(b%a, a);
}

    int findGCD(vector<int>& nums) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            mx = max(mx, nums[i]);
            mn = min(mn, nums[i]);
        }
        return gcd(mx,mn);
    }
};