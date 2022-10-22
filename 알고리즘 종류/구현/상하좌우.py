def solution(n, data):
    now = [1, 1]
    dic = {"R":[0,1], "L":[0, -1], "U": [-1, 0], "D": [1, 0]}

    for d in data:
        prev = now[:]        
        now[0] += dic[d][0]
        now[1] += dic[d][1]
        if now[0] < 1 or now[0] > n or now[1] < 1 or now[1] > n:
            now = prev
    return now[0], now[1]

print(solution(5, ["R","R","R","U","D","D"]))