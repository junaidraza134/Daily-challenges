class Solution(object):
    def largestInteger(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        mp=Counter()
        freq=Counter()
        n=len(nums)
        r=0
        l=0
        while(r<n):
            mp[nums[r]]+=1
            if(r-l+1==k):
                for i in mp.items():
                    freq[i[0]]+=1
                mp[nums[l]]-=1
                if(mp[nums[l]]==0):
                    del mp[nums[l]]
                l+=1
            r+=1
        
        maxx=-1

        for i in freq.items():
            if(i[1]==1):
                maxx=max(maxx,i[0])
        return maxx
