def solution(n, m , pos, data):
    x, y = pos[0], pos[1]
    dir = pos[2]
    dx = [-1, 0, 1, 0] #북 동 남 서
    dy = [0, 1, 0, -1]
    data[x][y] = 1

    def turn_left(dir):
        dir -= 1
        if dir == -1:
            dir = 3
        return dir
        
    count = 1
    turn = 0
    while True:
        dir = turn_left(dir)
        nx = x + dx[dir]
        ny = y + dy[dir]
        turn += 1
        if data[nx][ny] == 0:
            data[nx][ny] = 1
            x, y = nx, ny
            count += 1
            turn = 0
            continue

        if turn == 4:
            nx = x - dx[dir]
            ny = y - dy[dir]

            if data[nx][ny] == 0:
                x, y = nx, ny
            else:
                break
            turn = 0
    
    return count




print(solution(4,4,[1,1,0],[[1,1,1,1],[1,0,0,1],[1,1,0,1],[1,1,1,1]]))