class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int i = 0;
        for (; i < word1.size() && i < word2.size(); i++) {
            res += word1[i];
            res += word2[i];
        }
        if (i < word1.size()) res.append(word1.substr(i));
        if (i < word2.size()) res.append(word2.substr(i));
        return res;
    }
};
