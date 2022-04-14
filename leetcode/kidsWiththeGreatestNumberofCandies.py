class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        answer = [False] * len(candies)
        maxCandy = max(candies) - extraCandies
        for i in  range(len(candies)):
            if candies[i] >= maxCandy:
                answer[i] = True
                
        return answer
