def solution(data):
    count = 0
    row, col = int(data[1]), int(ord(data[0])) - int(ord('a')) + 1
    steps = [(-2, -1), (-2, 1), (-1, -2), (-1, 2), (1, -2), (1, 2), (2, -1), (2, 1)]
    for step in steps:
        now_row = row + step[0]
        now_col = col + step[1]
        if now_row >= 1 and now_col >= 1 and now_row <= 8 and now_col <= 8:
            count += 1

    return count 
print(solution("c2"))