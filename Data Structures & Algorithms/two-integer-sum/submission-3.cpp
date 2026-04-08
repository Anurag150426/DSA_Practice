class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> original index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // If the complement exists in the map, we found our pair!
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            
            // Otherwise, store the current number and its index
            mp[nums[i]] = i;
        }
        return {};
    }
};