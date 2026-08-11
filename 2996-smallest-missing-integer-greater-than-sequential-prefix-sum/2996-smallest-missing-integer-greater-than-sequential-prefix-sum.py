class Solution(object):
    def missingInteger(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        st=set(nums)
        sq=nums[0]
        for i in range(1,n):
            if(nums[i]==nums[i-1]+1):
                sq+=nums[i]
            else:
                break
        
        while(sq in st):
            sq+=1
        return sq
        