class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        for i in range(len(haystack)):
            for j in range(len(needle)):
                if(i+j>=len(haystack) or haystack[i+j]!=needle[j]):
                    break
            else:
                return i
        return -1
      