# 그리디의 가장 큰 포인트는 바로 맞닥뜨리는 순간에 가장 좋은 선택을 하는 것이다.
# 거스름돈과 같은 문제는 가장 큰 돈 부터 걸러주기 때문에 그리디에 적합하다.

n = 3650
count = 0

coins = [ 500, 100,50,10]

for c in coins:
  count += n //c
  n %= c
  
print(count)
