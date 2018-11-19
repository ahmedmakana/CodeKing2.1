X = input()	# The input
# Compare the input and its reverse
if int(X) < int(X[::-1]):
	print(1)
else:
	print(0)
