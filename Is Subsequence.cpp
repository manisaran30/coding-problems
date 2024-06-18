class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int c=0;
        for(int i=0;c<n&&i<t.size();i++){
            if(s[c]==t[i]){
                c++;
            }
        }
        if(c==n) return true;
        else return false;
        
    }
};
