class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> st(256, -1);
        int ml = 0, qq = -1;
        for (int i = 0; i != s.length(); i++) {
            if (st[s[i]] > qq)
                qq = st[s[i]];
            st[s[i]] = i;
            ml = max(ml, i - qq);
        }
        return ml;
    }
};
