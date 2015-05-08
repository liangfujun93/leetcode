class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp ;
        for (int i = 0; i < nums.size(); ++i) {
            if (mp.find(target - nums[i]) != mp.end()) {
                vector <int> ret = {mp[target - nums[i]], i + 1} ;
                return ret ;
            }
            mp[nums[i]] = i + 1 ;
        }
    }
};
