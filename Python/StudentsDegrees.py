# Get inputs
n = int(input())
for _ in range(n):
    grade = int(input())
    # Calculate next multiple of 5
    next5 = (grade//5+1)*5
    # Compare ans print
    if grade >= 38 and next5 - grade < 3:
        print(next5)
    else:
        print(grade)