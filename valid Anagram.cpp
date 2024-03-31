class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int>v(26,0);
       for(int i=0;i<s.length()-1;i++){
        v[s[i]-'a']++;
        }
        for(int i=0;i<t.length()-1;i++){
            v[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=0){
                return false;
            }
        }
        return true;
    }
};
