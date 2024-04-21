class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       vector<int>maxatright(n,0);
       int currmax=prices[n-1];
       for(int i=n-2;i>=0;i--){
        maxatright[i]=currmax;
        currmax=max(currmax,prices[i]);
       }
       int profit=0;
       for(int i=0;i<n-1;i++){
        int currprofit=maxatright[i]-prices[i];
        if(currprofit>profit){
            profit=currprofit;
        }
      }
      return profit;
    }
};
