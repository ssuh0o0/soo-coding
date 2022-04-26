class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        prod, sumd = 1, 0
        while n:
            n, num = divmod(n , 10)
            prod, sumd = prod * num , sumd + num
        return prod - sumd
