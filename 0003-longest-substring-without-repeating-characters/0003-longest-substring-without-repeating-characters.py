class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        mp=Counter()
        l=0
        n=len(s)
        maxx=0
        for i in range(n):
            mp[s[i]]+=1
            while(mp[s[i]]>1):
                mp[s[l]]-=1
                l+=1
            maxx=max(maxx,i-l+1)
        return maxx
        