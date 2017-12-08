class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for(int i = 0; strs.size(); ++i){
            for(int j = 0; j < strs.size(); ++j){
                if(i >= strs[j].size() or j > 0 and strs[j][i] != strs[j-1][i])
                    return res;
            }
            res += strs[0][i];
        }
        return res;
    }
};
