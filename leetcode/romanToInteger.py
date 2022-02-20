class Solution:
    def romanToInt(self, s: str) -> int:
        dict = {"I":1, "IV":4, "V":5, "IX":9, "X":10, "XL":40, "L":50, "XC":40, "C":100, "CD":400, "D":500, "CM":900, "M":1000}
        answer = 0
        for idx, value in enumerate(s):
            answer += dict[value]
            if idx > 0 and idx < len(s) and s[idx-1]+s[idx] in dict:
                answer -= 2 * dict[s[idx-1]]
        return answer
