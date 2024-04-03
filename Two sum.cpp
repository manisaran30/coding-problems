//Two sum using brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
         for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
         }
        }
        return {};
    }
};

//Two sum using hashing
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       unordered_map<int,int>numMap;
       for(int i=0;i<n;i++){
        int comp=target-nums[i];
        if(numMap.count(comp)){
            return{numMap[comp],i};   //it gives index of comp using hashtable orelse it stores in hastable if not present current comp
        }
        numMap[nums[i]]=i;
       }
       return {};
       }
};
