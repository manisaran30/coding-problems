class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<=right){
            if(!isalnum(s[left])){    //to skip non-alpha numeric characters
                left++;
                continue;
            }
            if(!isalnum(s[right])){
                right--;
                continue;
            }
            if(tolower(s[left])!=tolower(s[right])) return false;  //to lower convert characters to lowercase to comparison
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};
