class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        buckets = [0 for i in range(101)]
        for num in nums:
            buckets[num] += 1
            
        cumulative_smaller = []
        total_smaller = 0
        
        for b in buckets:
            cumulative_smaller.append(total_smaller)
            total_smaller += b
        
        return [cumulative_smaller[num] for num in nums]
