//author :shreyamalogi

/*

vertical approach

*/


class Solution {
public:
    string longestCommonPrefix(vector<string> &s) {
        string res("");
        if(s.size() == 0) return res;
        int i = 0;
        while(1) {
            for(int j = 0; j < s.size(); ++j) {
                if(i == s[j].size() || (j > 0 && s[j][i] != s[j-1][i]))
                    return res;
            }
            res += s[0][i];
            ++i;
        }
    }
};

