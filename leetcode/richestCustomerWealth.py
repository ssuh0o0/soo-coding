class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        aList = []
        for i in accounts:
            aList.append(sum(i))
        return max(aList)
