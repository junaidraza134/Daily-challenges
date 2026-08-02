class Solution(object):
    def solve(self,nums,goal):
        n=len(nums)
        l=0
        r=0
        summ=0
        count=0
        if goal < 0:
            return 0
        while(r<n):
            summ+=nums[r]
            while(summ>goal):
                summ-=nums[l]
                l+=1
           
            count+=(r-l+1)
            r+=1
        return count

    def numSubarraysWithSum(self, nums, goal):
        """
        :type nums: List[int]
        :type goal: int
        :rtype: int
        """
        
        return self.solve(nums, goal) - self.solve(nums, goal - 1)
        

        