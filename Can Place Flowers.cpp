class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      int m=flowerbed.size();
      int cnt=0;
      for(int i=0;i<m;i++){
        if(flowerbed[i]!=1){
            if(flowerbed[max(0,i-1)]==0 && flowerbed[min(m-1,i+1)]==0){
                flowerbed[i]=1;
                cnt++;
            }
        }
        else continue;
      }
      if(cnt>=n) return true;
      else return false;
    }
}; 
