class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)-1):
             for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i,j]
                
                
![image](https://user-images.githubusercontent.com/55631147/153757387-72c067fd-bb6d-477c-80ef-78ca9841c875.png)
                  
