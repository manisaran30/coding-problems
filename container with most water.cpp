//method 1
class Solution {
public:
    int maxArea(vector<int>& height) {
        int output = 0, i = 0, j = height.size()-1;
        int result = 0;
        while (i < j) {
            if (height[i] <= height[j]) {
                result = height[i] * (j - i);
                i++;
            } else {
                result = height[j] * (j - i);
                j--;
            }
            if (result > output) output = result;
        }
        return output;
    }
};

//method 2

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarea=0;
        while(left<right){
            int curr=min(height[left],height[right])*(right-left);
            maxarea=max(curr,maxarea);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
        
    }
};
