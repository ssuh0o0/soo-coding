class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = int("".join(map(str, digits)))
        return list(str(num+1))
    
# much faster code
# class Solution:
#     def plusOne(self, digits: List[int]) -> List[int]:
#         num = "".join(map(str, digits))
#         num = int(num) + 1
#         num = str(num)
#         return list(num)
