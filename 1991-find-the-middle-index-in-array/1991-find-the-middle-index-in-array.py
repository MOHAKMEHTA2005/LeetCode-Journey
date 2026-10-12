class Solution(object):
    def findMiddleIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        totalSum = sum(nums)
        leftSum = 0
        for i in range(len(nums)):
            rightSum = totalSum - nums[i] - leftSum
            if leftSum == rightSum:
                return i
            leftSum += nums[i]
        return -1