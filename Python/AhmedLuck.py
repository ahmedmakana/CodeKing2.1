# Get inputs
n = int(input())
ar = list(map(int,input().split()))
# Init luck =0
maxGain,luck =0,0
for i in range(n):
	# Check for the maxGain
    if ar[i] > maxGain:
        maxGain = ar[i]
        luck += 1
# Print answer
print(luck)