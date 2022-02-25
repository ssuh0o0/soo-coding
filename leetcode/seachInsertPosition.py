class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        for i in range(len(nums)):
            if nums[i] == target:
                return i
            elif nums[i] > target:
                return i
        return len(nums)
      

# 이진탐색 이용. 이름에서 search 라고 나와있으면, 탐색 알고리즘을 써보자.
# class Solution:
#     def searchInsert(self, nums: List[int], target: int) -> int:
#         min = 0
#         max = len(nums)-1  
#         while min <= max:
#             mid = (min+max)//2 #rounds down
#             if target == nums[mid]:
#                 return mid
#             else:
#                 if target < nums[mid]:
#                     max = mid-1
#                 else:
#                     min = mid+1
#         return min  
