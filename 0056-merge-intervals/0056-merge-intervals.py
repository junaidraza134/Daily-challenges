class Solution(object):
    def merge(self, nums):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        n=len(nums)
        nums.sort()
        res=[]
        start1=nums[0][0]
        end1=nums[0][1]
        for i in range(1,n):
            start2=nums[i][0]
            end2=nums[i][1]
            if(end1>=start2):
                start1=start1
                end1=max(end1,end2)
            else:
                res.append([start1,end1])
                start1=start2
                end1=end2
        res.append([start1,end1])
        return res
        
            
        