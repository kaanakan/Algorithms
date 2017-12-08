class Solution {
public:
    int reverse(int x) {
        int res = 0, flag = 0;
        if(x < 0){
            flag = 1;
            x *= -1;
        }
        while(x > 0)
        {
                int temp = res*10 + (x % 10);
            if(temp/10 != res)
                return 0;
            res = temp;
            x = x/10;
        }

        if(flag) res *= -1;
        return res;
    }
};
