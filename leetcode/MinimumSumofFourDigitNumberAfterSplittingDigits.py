class Solution:
    def minimumSum(self, num: int) -> int:
        nums = sorted(list(str(num)))
        return (int(nums[0])+int(nums[1]))*10 + (int(nums[2])+int(nums[3]))
