class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        slist = list(s.split())
        return len(slist[-1])
