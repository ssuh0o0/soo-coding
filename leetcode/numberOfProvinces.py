class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        root = [i for i in range(n)]

        def find(x):
            while x != root[x]:
                x = root[x]
            return x

        def union(x, y):
            rootX = find(x)
            rootY = find(y)
            if rootX != rootY:
                root[rootY] = rootX

        def connected(x, y):
            return find(x) == find(y)
        
        for i in range(n):
            for j in range(n): 
                if i == j :
                    continue
                    
                if isConnected[i][j] == 1 :
                    union(i, j)
        count = 0
        for i in range(n):
            if root[i] == i:
                count += 1


        return count
