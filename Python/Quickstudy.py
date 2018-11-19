# Get inputs
N,T = map(int,input().split())
ar = [int(input()) for i in range(N)]
# sort chapters
ar.sort()
ans = 0
# check if the remaining time enough for another chapter
while T - ar[ans] >=0 and ans < N:
    T -= ar[ans]
    ans += 1
# print answer
print(ans)