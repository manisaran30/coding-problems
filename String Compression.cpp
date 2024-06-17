class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        for (int i = 0; i < chars.size();) {
            char letter = chars[i];
            int count = 0;
            while (i < chars.size() && chars[i] == letter) {
                count++;
                i++;
            }
            chars[ans++] = letter;
            if (count > 1) {
                for (char c : to_string(count)) {    //here its changing last character of the same alphbet into its count variable (a a b b c c c ) to (a,'2',b,'2',c,'3')
                    chars[ans++] = c;
                }
            }
        }
        return ans;
    }
};
