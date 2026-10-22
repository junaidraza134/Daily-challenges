class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if(len(s)!=len(t)):
            return False
        mp1={}
        mp2={}
        for ch in s:
            if ch in mp1:
                mp1[ch]+=1
            else:
                mp1[ch]=1
        
        for ch in t:
            if ch in mp2:
                mp2[ch]+=1
            else:
                mp2[ch]=1
        
        if(mp1==mp2):
            return True
        else:
            return False

        