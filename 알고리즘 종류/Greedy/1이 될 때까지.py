# 두 가지 방법으로 N을 1로 만들자
# 1. N에서 1을 뺄 수 있다.
# 2. N을 K로 나눈다.

def solution(n, k):
    cnt = 0
    while n != 1:
        cnt += 1
        if n % k != 0:
            n -= 1
        else :
            n //= k
    return cnt

print(solution(25, 3))