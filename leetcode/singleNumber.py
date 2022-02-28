class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        nums = sorted(nums)
        for i in range(0,len(nums)-1,2):
            if nums[i] != nums[i+1]:
                return nums[i]
            
        return nums[-1]
    
    
# 대박 아이디어
# 가능한 이유:  같은 숫자 ^ 같은 숫자 = 0 이 나오기때문.. 
#  class Solution:
#     def singleNumber(self, nums: List[int]) -> int:
#         result = 0
#
#         for num in nums:
#             result = result ^ num
#        
#         return result
