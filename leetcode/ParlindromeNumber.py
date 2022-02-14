class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 :
            return False
        xlist = "".join(reversed([i for i in str(x)]))
        if x == int(xlist):
            return True
        return False
      
# class Solution:
#     def isPalindrome(self, x: int) -> bool:
#         x=str(x)
#         if x==x[::-1] :
#             return True 
#         else :
#             return False

      
      
