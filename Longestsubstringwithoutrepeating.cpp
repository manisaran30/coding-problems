class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>Set;
        int Max=0;
        int begin=0;
        int end=0;
        while(begin<s.size())
        {
            auto it=Set.find(s[begin]);
            if(it==Set.end())
            {
                if(begin-end+1>Max)
                    Max=begin-end+1;
                Set.insert(s[begin]);
                begin++;
            }
            else{
                Set.erase(s[end]);
                end++;
            }
        }
    return Max;
    }
};
