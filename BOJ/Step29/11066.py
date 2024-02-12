import sys

T = int(sys.stdin.readline())

for _ in range(T):
    K = int(sys.stdin.readline())
    lst = [0] + list(map(int, sys.stdin.readline().split()))
    s_lst = [0 for _ in range(K+1)]
    
    for i in range(1, K+1):
        s_lst[i] = s_lst[i-1] + lst[i]
        
    dp = [[0 for i in range(K+1)] for j in range(K+1)]
    
    for i in range(2, K+1):
        for j in range(1, K+2-i):
            dp[j][j+i-1] = min([dp[j][j+q] + dp[j+q+1][j+i-1] for q in range(i-1)]) + (s_lst[j+i-1] - s_lst[j-1])
            
    print(dp[1][K])