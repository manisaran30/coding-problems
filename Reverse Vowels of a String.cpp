class Solution {
public:
bool check(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return 1;
    else return 0;
}
    string reverseVowels(string s) {
        int j=s.length()-1, i=0;
        while(i<j){
            if(check(s[i])&&check(s[j])) swap(s[i++],s[j--]);
            else if(!check(s[i])&&check(s[j])) i++;
            else if(check(s[i])&&!check(s[j])) j--;
            else{
                i++;
                j--;
            }

        }
       return s; 
    }
};
