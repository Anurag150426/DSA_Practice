class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int x : nums) {
            mp[x]++;
        }

        vector<pair<int,int>> v;
        for (auto &it : mp) {
            v.push_back({it.first, it.second});
        }

        sort(v.begin(), v.end(), [](pair<int,int>& a, pair<int,int>& b) {
            return a.second > b.second;  // sort by frequency
        });

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
