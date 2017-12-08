class Solution {
public:
    int val(char c){
        switch(c){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
            default:return -1;
        }
    }
    
    int romanToInt(string s) {
        int num = 0;
        for(int i = 0; i < s.size(); ++i){
            int tmp = val(s[i]);
            if(i < s.size() - 1){
                int next = val(s[i + 1]);
                if(tmp >= next)
                    num += tmp;
                else{
                    num += next - tmp;
                    ++i;
                }
            }
            else{
                num += tmp;
                ++i;
            }
        }
        return num;
    }
};
