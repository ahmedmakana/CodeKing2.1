# Get input
T = int(input())
for _ in range(T):
    # Create empty dictionary
    freq = {}
    s = input()
    # count the frequecny of each letter
    for c in s:
        if c in freq:
            freq[c] += 1
        else:
            freq[c] = 1
    odd = 0
    # Count the number of odd frequencies
    for key in freq:
        if freq[key] % 2 == 1:
            odd +=1
    # If there is more than one odd frequency, no palindrome can be made
    if odd > 1:
        print('No')
    else:
        print('Yes')