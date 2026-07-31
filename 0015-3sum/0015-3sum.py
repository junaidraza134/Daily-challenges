class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        n=len(nums)
        # res=[][]
        nums.sort()
        s=set()
        for i in range(n):
            l=i+1
            r=n-1
            while(l<r):
                summ=nums[i]+nums[l]+nums[r]
                if(summ==0):
                    s.add((nums[i], nums[l], nums[r]))
                    l+=1
                    r-=1
                elif summ<0:
                    l+=1
                else:
                    r-=1
        res=[]
        for i in s:
            res.append(list(i))
        return res

        