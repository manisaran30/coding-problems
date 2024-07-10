class Solution {
public:
    bool closeStrings(string word1, string word2) {
       vector<int> freqOne(26,0);
       vector<int> freqTwo(26,0);

       vector<bool>presentOne(26,false);
       vector<bool>presentTwo(26,false);
       for(char ch:word1){
        freqOne[ch-'a']++;
        presentOne[ch-'a']=true;
       }
       for(char ch:word2){
        freqTwo[ch-'a']++;
        presentTwo[ch-'a']=true;
       }
       sort(freqOne.begin(),freqOne.end());
       sort(freqTwo.begin(),freqTwo.end());
       if(freqOne==freqTwo&&presentOne==presentTwo){
        return true;
       }
       return false;

    }
};
