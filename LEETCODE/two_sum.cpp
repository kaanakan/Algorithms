#include<algorithm>

class Solution {
    private:
    int find(vector<int> vector, int target){
	int len = vector.size();
        for(int i = 0; i < len; i++){
            if(vector[i] == target){
                return i+1;
            }

        }
        return 0;
}
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len, index;
        len = nums.size();
        vector<int> res;
        for(int i = 0; i < len; ++i){
            if(find(nums, target - nums[i]) && i != find(nums, target - nums[i]) - 1){
                res.push_back(i);
                res.push_back(find(nums, target - nums[i]) - 1);
                break;
            }
        }

        return res;
    }
};
