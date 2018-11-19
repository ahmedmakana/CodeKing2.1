# Get inputs
A,B,N = map(int,input().split())
ar = list(map(int,input().split()))
# init answer
ans = 0
for x in ar:
	# Check if element x can be packed or not
    if x <= A or x <= B:
        if A > B:
            A -= x
        else:
            B -= x
    else:
        ans += 1
# print ans
print(ans)