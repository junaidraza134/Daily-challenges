from collections import Counter
class Solution(object):
    def minimumPushes(self, word):
        """
        :type word: str
        :rtype: int
        """
        n=len(word)
        mp=Counter()
        ans=0
        for i in word:
            mp[i]+=1
        
        fre=[]
        for i in mp:
            fre.append(mp[i])
        fre.sort(reverse=True)

        for i in range(len(fre)):
            ans+=fre[i]*(i//8+1)
        return ans



       


        