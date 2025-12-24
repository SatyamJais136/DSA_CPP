class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> v;
        for(int i = 0; i < nums.size(); i++){
            v.push_back({nums[i], i}); //store (value, index) of original array
        }
        sort(v.begin(), v.end());
        int n = v.size();
        int i = 0, j = n-1;
        while(i < j){
        int sum = v[i].first + v[j].first;
            if(sum > target) j--;
            else if(sum < target) i++;
            else{
                return {v[i].second, v[j].second};
            }
        }
        return {};
    }
};