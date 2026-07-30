from collections import Counter
class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mp=Counter()
        for i in nums:
            mp[i]+=1
        
        for i in mp:
            if mp[i]==1:
                return i
        # return -1




        