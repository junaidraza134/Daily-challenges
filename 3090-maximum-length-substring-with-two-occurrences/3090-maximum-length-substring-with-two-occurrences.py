from collections import Counter
class Solution(object):
    def maximumLengthSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        mp=Counter()
        l=0
        r=0
        n=len(s)
        maxx=0
        while(r<n):
            mp[s[r]]+=1
            while(mp[s[r]]>2):
                mp[s[l]]-=1
                if(mp[s[l]]==0):
                   del mp[s[l]]
                l+=1
            maxx=max(maxx,r-l+1)
            r+=1
        return maxx

        