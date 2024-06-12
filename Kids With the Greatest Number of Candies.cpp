class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool>great;
       int max=INT_MIN;
       int n=candies.size();
       for(int i=0;i<n;i++){
        if(candies[i]>max){
            max=candies[i];
        }
       }
       for(int i=0;i<n;i++){
        if(candies[i]+extraCandies>=max){
            great.push_back(true);
        }
        else great.push_back(false);
       }
       return great;

    }
};
