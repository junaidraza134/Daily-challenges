from collections import Counter
class Solution(object):
    def totalFruit(self, fruits):
        """
        :type fruits: List[int]
        :rtype: int
        """
        mp=Counter()
        n=len(fruits)
        l=0
        r=0
        maxx=0
        while(r<n):
            mp[fruits[r]]+=1
            while(len(mp)>2):
                mp[fruits[l]]-=1
                if(mp[fruits[l]]==0):
                    mp.pop(fruits[l])
                l+=1
            maxx=max(maxx,r-l+1)
            r+=1
        return maxx

