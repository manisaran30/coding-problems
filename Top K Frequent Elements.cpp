class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>map;
        priority_queue<pair<int,int>>pq;
        for(auto x:nums){
            map[x]++;
        }
        for(auto x:map){
            pq.push({x.second,x.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }

};
