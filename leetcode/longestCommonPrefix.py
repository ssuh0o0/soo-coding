class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs = sorted(strs,key=len)
        slist = []

        if len(strs) == 1:
            return strs[0]

        for i in range(len(strs[0])):
            slist.append(strs[0][:len(strs[0])-i])

        for s in slist:
            for st in strs[1:]:
                if s != st[:len(s)]:
                    break
                elif st == strs[-1]:
                    return s 
        return ""
