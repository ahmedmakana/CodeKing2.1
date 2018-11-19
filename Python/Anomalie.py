# Get inputs
n, k = map(int,input().split())
ar = list(map(int,input().split()))
def isAnomalie(i):
	for j in range(n):
		if i == j:continue
		if abs( ar[i] - ar[j]) <= k:
			return False
	return True
# answer is the number of abnomial numbers in the array
answer = 0
for i in range(n):
	if isAnomalie(i):
		answer += 1
print(answer)