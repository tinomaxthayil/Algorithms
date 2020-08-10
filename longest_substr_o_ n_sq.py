def lengthOfLongestSubstring(self, s: str) -> int:
        val=0
        for i in range(0,len(s)):
            hmap={}
            hmap[s[i]]=1
            count=1
            for j in range(i+1,len(s)):
                if s[j] in hmap.keys():
                    break
                else:
                    hmap[s[j]]=1
                    count+=1
            if count>val:
                val=count
        
        return val