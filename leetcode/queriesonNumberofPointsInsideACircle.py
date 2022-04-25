import math
class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        answer=[]    
        for q in queries:
            cnt = 0
            for p in points:
                distance = math.sqrt((q[0]-p[0])**2 + (q[1]-p[1])**2)
                if distance <= q[2] :
                    cnt += 1
            answer.append(cnt)
        return answer
