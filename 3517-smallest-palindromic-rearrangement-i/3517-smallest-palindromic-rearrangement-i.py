from collections import Counter,defaultdict,deque;
class Solution(object):
    def smallestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        mp=Counter(s)
        left=""
        middle=""
        for ch in 'abcdefghijklmnopqrstuvwxyz':
            while(mp[ch]>=2):
                left+=ch
                mp[ch]-=2
            if(mp[ch]==1):
                middle+=ch
        res=left[::-1]
        
        return left+middle+res







        