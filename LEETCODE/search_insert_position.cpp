class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lower = 0, upper = nums.size() - 1;
        while(lower <= upper){
            int mid = lower + (upper - lower) / 2;
            if(nums[mid] < target)
                lower = mid + 1;
            else
                upper = mid - 1;
        }
        return lower;
    }
};
