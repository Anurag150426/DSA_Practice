class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        unordered_map<char,int>mp1;
        for(int j=0;j<t.size();j++)
        {
            mp1[t[j]]++;
        }
        return mp==mp1;
        
    }
};
