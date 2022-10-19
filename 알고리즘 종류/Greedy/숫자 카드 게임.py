# 룰을 지켜 가장 높은 숫자를 뽑아야 한다. 룰은 다음과 같다
# 1. 숫자가 쓰인 카드들이 N x M 형태로 있다. N은 행, M은 열
# 2. 먼저 뽑고자 하는 카드가 포함되어 있는 행을 선택
# 3. 그 행이 포함된 카드들 중 가장 숫자가 낮은 카드를 뽑아야한다.

def solution(data):
    minNum = 0
    for d in data:
        if min(d) > minNum:
            minNum = min(d)
    return minNum



print(solution([[3,1,2],[2,2,4],[4,1,6]]))
