def solution(data):
    
    for i in range(0,len(data)):
        min = i
        for j in range(i+1, len(data)):
            if data[min] > data[j]:
                min = j
        data[i], data[min] = data[min], data[i]

    return data

print(solution([7, 5, 9, 0, 3, 1, 6, 2, 4, 8]))