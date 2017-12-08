class Solution {
public:
    bool isPalindrome(int x) {
        int tmp, count, digit;
        tmp = x;
        count = 0;
        while(x > 0){
            digit = x %10;
            count = count * 10 + digit;
            x /= 10;
        }
        return (tmp == count) ? true:false;
    }
};
