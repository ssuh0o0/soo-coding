class Solution:
    def climbStairs(self, n: int) -> int:
        steps = [0,1,2]
        for i in range(3,n+1):
            steps.append(steps[i-2]+steps[i-1])

        return steps[n]
