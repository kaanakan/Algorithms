class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dd = {}
        for i in range(len(nums)):
            if target - nums[i] in dd:
                return [dd[target - nums[i]],i]
            else:
                dd[nums[i]] = i
