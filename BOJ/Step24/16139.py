import sys

S = sys.stdin.readline().rstrip()
cnt = {0 : [0] * 26}

q = int(sys.stdin.readline().rstrip())
for i, ch in enumerate(S):
    cnt[i+1] = cnt[len(cnt)-1][:]
    cnt[i+1][ord(ch)-97] += 1
    
for _ in range(q):
    alp, l, r = sys.stdin.readline().rstrip().split()
    ans = cnt[int(r)+1][ord(alp)-97] - cnt[int(l)][ord(alp)-97]
    print(ans)