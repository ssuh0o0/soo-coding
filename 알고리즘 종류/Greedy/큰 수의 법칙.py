# 다양한 수로 이루어진 배열이 있을 때 주어진 수들을 M번 더하여 가장 큰수를 만드는 법칙이다.
# 같은 수가 연속으로 K번을 초과해서 더해질 수 없다.

# 예시
# 5 8 3 (배열의 크기, 숫자가 더해지는 총 횟수, 최대로 연속가능한 횟수)
# 2 4 5 4 6
# 출력값 : 46

def solution(N,M,K,data):
    data = sorted(data, reverse=True)
    first, second = data[0], data[1]
    answer = 0

    while M != 0:
        for _ in range(K):
            if M == 0:
                break
            answer += first
            M -= 1

        answer += second
        M -= 1
    return answer

print(solution(5,8,3,[2,4,5,4,6]))