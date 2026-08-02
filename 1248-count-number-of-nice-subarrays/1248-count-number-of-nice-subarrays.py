from collections import Counter
class Solution(object):
    def solve(self,nums,k):
        if(k<0):
            return 0
        l=0
        r=0
        count=0
        n=len(nums)
        odd=0
        while(r<n):
            if(nums[r]%2==1):
                odd+=1
            while(odd>k):
                if(nums[l]%2==1):
                    odd-=1
                l+=1
            count+=(r-l+1)
            r+=1
        return count

    def numberOfSubarrays(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        return self.solve(nums,k)-self.solve(nums,k-1)
       







           
