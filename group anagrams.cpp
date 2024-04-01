class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>map;
        for(auto st:strs)
        {
            string s=st;
            sort(s.begin(),s.end());
            map[s].push_back(st);
        }
        for(auto x:map)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
