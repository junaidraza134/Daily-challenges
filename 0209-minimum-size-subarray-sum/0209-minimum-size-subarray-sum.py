class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        left=0
        sum=0
        minn=n+1
        for r in range(n):
            sum+=nums[r]
            while(sum>=target):
                minn=min(minn,r-left+1)
                sum-=nums[left]
                left+=1
        if minn==n+1:
            return 0
        return minn
        