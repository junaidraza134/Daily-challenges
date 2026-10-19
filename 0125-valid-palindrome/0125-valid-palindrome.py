class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        ch=""
        for i in range(len(s)):
            if(s[i].isalnum()):
                ch+=s[i].lower()
        temp=ch[::-1]
        
        if(temp==ch):
            return True
        return False

        
             
        